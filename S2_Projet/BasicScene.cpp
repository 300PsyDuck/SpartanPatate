#include <iostream>
#include <string>

#include "BasicScene.h"

BasicScene::BasicScene() : Scene()
{
	buffer = new char*[HEIGHT];
	for(int i = 0; i < HEIGHT; i++)
	{
		buffer[i] = new char[WIDTH];
		for(int j = 0; j < WIDTH; j++)
			buffer[i][j] = ' ';
	}
}

void BasicScene::afficher()
{	
	clear();
	buffer[10][38] = 'M';
	buffer[10][39] = 'A';
	buffer[10][40] = 'X';
	buffer[10][41] = 'I';
	buffer[10][42] = 'M';
	buffer[10][43] = 'E';
	draw();
}

void BasicScene::input(float frameTime)
{

}

Scene* BasicScene::update(float frameTime)
{
	return this;
}

void BasicScene::clear()
{
	int i = 0;
	for(; i < HEIGHT; i++)
	{
		int j = 0;
		for(; j < WIDTH; j++)
		{
			buffer[i][j] = ' ';
		}
	}
}

void BasicScene::draw()
{
	int i = 0;
	for(; i < HEIGHT; i++)
	{
		int j = 0;
		for(; j < WIDTH; j++)
		{
			std::cout << buffer[i][j];
		}
		std::cout << std::endl;
	}
}
