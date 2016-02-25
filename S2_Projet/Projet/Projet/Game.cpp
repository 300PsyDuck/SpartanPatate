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
	//affiche la scène
	scene->afficher();
}

void Game::update(float frameTime)
{
	//update la scène
	scene = scene->update(frameTime);
}

