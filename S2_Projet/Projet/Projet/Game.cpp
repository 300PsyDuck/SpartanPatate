#include "Game.h"

Game::Game()
{
	scene = new Menu();
}

void Game::init()
{
}

void Game::afficher()
{
	//affiche la sc�ne
	scene->afficher();
}

void Game::update(float frameTime)
{
	//update la sc�ne
	scene = scene->update(frameTime);
}

