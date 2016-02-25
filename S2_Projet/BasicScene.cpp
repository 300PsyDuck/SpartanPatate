#include <iostream>
#include <string>

#include "BasicScene.h"

BasicScene::BasicScene() : Scene()
{
	buffer = new char*[HEIGHT];
	int i = 0;	
	for(; i < HEIGHT; i++)
	{
		buffer[i] = new char[WIDTH];
		int j = 0;
		for(; j < WIDTH; j++)
			buffer[i][j] = ' ';
	}
}

void BasicScene::afficher()
{	
	clear();
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
