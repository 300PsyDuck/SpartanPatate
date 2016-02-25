#ifndef SCENE_H
#define SCENE_H

#include <iostream>
#include <string>
#include "Input.h"

class Scene
{
	public:
		const int HEIGHT = 24;
		const int WIDTH = 79;
		Scene();
		virtual void afficher();
		virtual Scene* update(float frameTime);
		void clear();
		void draw();
	protected:
		char** buffer;
};

#endif //SCENE_H
