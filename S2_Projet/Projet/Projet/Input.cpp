#include <conio.h>
#include "Input.h"


int Input::KEY = 0;

// Update la touche du clavier dans une variable static disponible dans tout le logiciel
void Input::Update()
{
	KEY = 0;

	// Utilise la librairie conio.h pour lire la touche du clavier
	if (_kbhit())
	{
		KEY = _getch();
	}
}