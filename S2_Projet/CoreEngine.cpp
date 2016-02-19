#include "CoreEngine.h"

CoreEngine::CoreEngine(int largeur, int hauteur, double frameRate, Game* game)
{
	this->m_estEnFonction = false;
	this->m_game = game;
	this->m_largeur = largeur;
	this->m_hauteur = hauteur;
	this->m_frameTime = 1.0/frameRate;
}

void CoreEngine::demarrer()
{
	if(m_estEnFonction)
		return;
	
	lancer();
}

void CoreEngine::arreter()
{
	if(!m_estEnFonction)
		return;
	
	m_estEnFonction = true;
}

void CoreEngine::lancer()
{
	m_estEnFonction = true;
	
	int frames = 0;
	double frameCounter = 0;
	
	m_game->init();
	
	double tempsAvant = Time::GetTime();
	double tempsUnprocessed = 0;
	
	while(m_estEnFonction)
	{
		bool afficher = false;
	
		double tempsDepart = Time::GetTime();
		double tempsPasse = tempsDepart - tempsAvant;
		tempsAvant = tempsDepart;
		
		tempsUnprocessed += tempsPasse;
		frameCounter += tempsPasse;
		
		while(tempsUnprocessed > m_frameTime)
		{
			afficher = true;
			
			tempsUnprocessed -= m_frameTime;

			if(Fenetre::EstDemandeeFermeture())
				arreter();
			
			m_game->input((float) m_frameTime);
			Input::Update();
			
			m_game->update((float) m_frameTime);
			
			if(frameCounter >= 1.0)
			{
				std::cout << frames << std::endl;
				frames = 0;
				frameCounter = 0;
			}
		}
		if(afficher)
		{
			m_game->afficher();
			Fenetre::Afficher();
			frames++;
		}
		else
		{
			try
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(1));
			}
			catch (std::exception& e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	}

	cleanUp();
}

void CoreEngine::cleanUp()
{
	Fenetre::Dispose();
}
