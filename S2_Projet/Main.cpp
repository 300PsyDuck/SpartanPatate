#include <iostream>

#include "CoreEngine.h"

using namespace std;


int main()
{
	Game* game = new Game();
	CoreEngine* core = new CoreEngine(800, 600, 30, game);
	core->demarrer();
}
