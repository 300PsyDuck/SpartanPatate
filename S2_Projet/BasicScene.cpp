#include <iostream>
#include <string>

#include "BasicScene.h"

BasicScene::BasicScene() : Scene()
{

}

void BasicScene::afficher()
{	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	

	std::cout << "________________________________________________________________________________" << std::endl;
}

void BasicScene::input(float frameTime)
{

}

Scene* BasicScene::update(float frameTime)
{
	return this;
}
