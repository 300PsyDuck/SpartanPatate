#include "Game.h"

Game::Game()
{
	scene = new BasicScene();
}

void Game::init()
{
}

void Game::afficher()
{
	scene->afficher();
}

void Game::input(float frameTime)
{
	scene->input(frameTime);
}

void Game::update(float frameTime)
{
	scene = scene->update(frameTime);
}

