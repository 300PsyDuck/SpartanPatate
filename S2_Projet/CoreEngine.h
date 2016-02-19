#ifndef COREENGINE_H
#define COREENGINE_H

#include <iostream>
#include <chrono>
#include <thread>
#include <exception>

#include "Game.h"
#include "Time.h"
#include "Input.h"
#include "Fenetre.h"

class CoreEngine
{
	public:
		CoreEngine(int largeur, int hauteur, double frameRate, Game* game);
		void demarrer();
		void lancer();
		void arreter();
		void cleanUp();
	private:
		bool m_estEnFonction;
		Game* m_game;
		int m_largeur;
		int m_hauteur;
		double m_frameTime;
};

#endif //COREENGINE_H
