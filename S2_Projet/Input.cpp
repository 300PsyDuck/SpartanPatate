#include "Input.h"

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
	#include <conio.h>
#endif

#ifdef OS_LINUX
	//#include <curses.h>
#endif

void Input::Update()
{

}
