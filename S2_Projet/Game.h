#ifndef GAME_H
#define GAME_H

class Game
{
	public:
		Game();
		void init();
		void afficher();
		void input(float frameTime);
		void update(float frameTime);
};

#endif //GAME_H
