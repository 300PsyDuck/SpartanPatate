#ifndef GAME_H
#define GAME_H

#include "Scene.h"
#include "BasicScene.h"

class Game
{
	public:
		Game();
		void init();
		void afficher();
		void input(float frameTime);
		void update(float frameTime);
		Scene* scene;
};

#endif //GAME_H
