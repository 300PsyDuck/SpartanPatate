#include "Scene.h"

#include <string.h>

Scene::Scene()
{
	// Initialisation du buffer de l'�cran de la classe m�re
	buffer = new char*[HEIGHT];
	int i = 0;
	for (; i < HEIGHT; i++)
	{
		buffer[i] = new char[WIDTH];
		int j = 0;
		for (; j < WIDTH; j++)
			buffer[i][j] = ' ';
	}
}

void Scene::afficher()
{
}

Scene* Scene::update(float frameTime)
{
	return this;
}

// Fonction de la classe m�re pour effacer le buffer de l'�carn
void Scene::clear()
{
	int i = 0;
	for (; i < HEIGHT; i++)
	{
		int j = 0;
		for (; j < WIDTH; j++)
		{
			buffer[i][j] = ' ';
		}
	}
}

//Fonction de la classe m�re pour afficher le buffer de l'�cran
void Scene::draw()
{
	int i = 0;
	for (; i < HEIGHT; i++)
	{
		int j = 0;
		for (; j < WIDTH; j++)
		{
			std:: cout << buffer[i][j];
		}
		std::cout << std::endl;
	}
}