#include <iostream>
#include <string>

#include "Fenetre.h"

void Fenetre::Dispose()
{
}
bool Fenetre::EstDemandeeFermeture()
{
	// Ajouter la logique pour permettre de fermer la console
	return false;
}

void Fenetre::Afficher()
{
	//Efface la console pour permettre d'afficher par la suite
	std::system("cls");
}
