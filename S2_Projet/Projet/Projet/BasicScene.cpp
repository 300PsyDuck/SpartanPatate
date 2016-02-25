#include "BasicScene.h"

// Initialisation des objets de la scène
BasicScene::BasicScene() : Scene()
{
	// Initialision des voitures
	CarsList = new List();
	Cars* car1 = new Cars(38, 20, 0);
	Cars* car2 = new Cars(20, 5, 1);
	Cars* car3 = new Cars(60, 18, 1);
	Cars* car4 = new Cars(70, 20, 1);

	CarsList->aggregation(car1);
	CarsList->aggregation(car2);
	CarsList->aggregation(car3);
	CarsList->aggregation(car4);

	perdu = false;
}

// Gestion de l'affichage de la scène
void BasicScene::afficher()
{	
	draw();
	clear();
}

// Gestion des objets de la scène
Scene* BasicScene::update(float frameTime)
{
	// Lecture des entrées
	if (Input::KEY == 75)
		CarsList->get_Head()->get_Data()->moveX(-2);
	if (Input::KEY == 77)
		CarsList->get_Head()->get_Data()->moveX(2);

	// Vérification si le joueur à perdu
	if(!perdu)
	{
		//Bouger toutes les voitures ennemies
		Noeud* element = CarsList->get_Head()->get_Suivant();
		while (element != NULL)
		{
			element->get_Data()->moveY();
			element = element->get_Suivant();
		}

		// Vérifier une collision
		Noeud* ourCar = CarsList->get_Head();
		element = CarsList->get_Head()->get_Suivant();
		while (element != NULL)
		{
			if (ourCar->get_Data()->getX() == element->get_Data()->getX() &&
				ourCar->get_Data()->getY() == element->get_Data()->getY())
				perdu = true;
			element = element->get_Suivant();
		}

		//Modifier le buffer pour ajouter les voitures à la scène
		element = CarsList->get_Head();
		while (element != NULL)
		{
			element->get_Data()->update(buffer);
			element = element->get_Suivant();
		}
	}
	else
	{
		// Afficher que le joueur à perdu.
		buffer[0][0] = 'P';
		buffer[0][1] = 'e';
		buffer[0][2] = 'r';
		buffer[0][3] = 'd';
		buffer[0][4] = 'u';
	}
	return this;
}

