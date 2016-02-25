#include "Time.h"
#include <time.h>

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(_WIN64) || defined(WIN64)
	#define OS_WINDOWS
#elif defined(__linux__)
	#define OS_LINUX
#elif __cplusplus >= 201103L
	#define OS_OTHER_CPP11
#else
	#define OS_OTHER
#endif

#ifdef OS_WINDOWS
	#include <Windows.h>
	#include <iostream>
	static double g_freq;
	static bool g_timerInitialized = false;
#endif

#ifdef OS_LINUX
	#include <sys/time.h>
	static const long NANOSECONDS_PER_SECOND = 1000000000L;
#endif

#ifdef OS_OTHER
	#include <SDL2/SDL.h>
#endif

#ifdef OS_OTHER_CPP11
	#include <chrono>
	static std::chrono::system_clock::time_point m_epoch = std::chrono::high_resolution_clock::now();
#endif

double Time::GetTime()
{
	// Section permettant d'obtenir le temps sous Windows
	#ifdef OS_WINDOWS
		if(!g_timerInitialized)
		{
			LARGE_INTEGER li;
			if(!QueryPerformanceFrequency(&li))
				std::cerr << "QueryPerformanceFrequency failed in timer initialization"  << std::endl;
			
			g_freq = double(li.QuadPart);
			g_timerInitialized = true;
		}
	
		LARGE_INTEGER li;
		if(!QueryPerformanceCounter(&li))
			std::cerr << "QueryPerformanceCounter failed in get time!" << std::endl;
		
		return double(li.QuadPart)/g_freq;
	#endif
	
	// Section permettant d'obtenir le temps sous Linux
	#ifdef OS_LINUX
		timespec ts;
		clock_gettime(CLOCK_REALTIME, &ts);
		return (double)(((long) ts.tv_sec * NANOSECONDS_PER_SECOND) + ts.tv_nsec)/((double)(NANOSECONDS_PER_SECOND));
	#endif

	// Section permettant d'obtenir le temps sous un autre syst�me d'exploitation � l'aide de CPP11
	#ifdef OS_OTHER_CPP11
		return std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - m_epoch).count() / 1000000000.0;
	#endif

	// Section permettant d'obtenir le temps sous un autre syst�me d'exploitation � l'aide de la librairie SDL
	#ifdef OS_OTHER
		return (double)SDL_GetTicks()/1000.0;
	#endif
}
