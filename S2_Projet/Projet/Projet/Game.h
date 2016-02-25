#ifndef GAME_H
#define GAME_H

#include "Scene.h"
#include "BasicScene.h"
#include "Menu.h"

class Game
{
	public:
		Game();
		void init();
		void afficher();
		void update(float frameTime);
		Scene* scene;
};

#endif //GAME_H
