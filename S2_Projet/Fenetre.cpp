#include <iostream>
#include <string>

#include "Fenetre.h"

void Fenetre::Dispose()
{
}
bool Fenetre::EstDemandeeFermeture()
{
	return false;
}
void Fenetre::Afficher()
{
	std::system("clear");
}
