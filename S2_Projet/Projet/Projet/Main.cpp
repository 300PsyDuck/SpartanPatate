#include <iostream>

#include "CoreEngine.h"

using namespace std;


int main()
{
	Game* game = new Game();									// Instanciation du jeux
	CoreEngine* core = new CoreEngine(800, 600, 7, game);		// Instanciation de l'engine
	core->demarrer();											// Démarre l'engine
}
