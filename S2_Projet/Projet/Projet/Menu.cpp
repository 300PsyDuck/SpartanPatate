// Menu.cpp�: d�finit le point d'entr�e pour l'application console.

#include <iostream>
#include <sstream>

#include "Menu.h"
#include "BasicScene.h"

using namespace std;

Menu::Menu() : Scene()
{

}

Scene* Menu::update(float frameTime)
{
	int m_difficulty = 1;  // Pour stocker le niveau de difficult�.
	return showMenuPrincipal();
}

void Menu::afficher()
{
	
}

//Montrer le menu principal!
Scene* Menu::showMenuPrincipal() {
	int difficulty = 0;  // Pour stocker le niveau de difficult�.
	int menuChoice;

	menuChoice = startTheMenu();

	switch (menuChoice) {
	case 1:
	{
			  cout << "Hourra! On joue!" << endl << endl;
			  return startTheGameAnimation(); // D�marre l'animation du jeux.
	}
	case 2:
	{
			  cout << "Besoin d'aide? Nous sommes avec vous!" << endl << endl;
			  showHelpMenu(); // D�marre le menu d'aide
			  break;
	}
	case 3:
	{
			  cout << "Au revoir" << endl;
			  break;
	}
	default:
	{
			   cout << "Hmmm... Vous n'avez pas s�lectionn� 1, 2 ou 3!" << endl << endl;
	}
	}
	return this;
}

// retourne la valeur du menu d�sir�
int Menu::startTheMenu() {
	string input = "";

	cout << " 1. (insert phoneme here)(for the moment write number 1) Jouer" << endl;
	cout << " 2. (insert phoneme here)(for the moment write number 2) Aide" << endl;
	cout << " 3. (insert phoneme here)(for the moment write number 3) Quitter" << endl << endl;

	cin >> input;
	int numberInput = std::stoi(input);
	
	return numberInput;
}

//TODO : mettre les buttons pi leurs r�les
void Menu::showHelpMenu() {
	string tampon = "";
	cout << "Bienvenue dans le menu aide." << endl << endl;
	cout << ". <---- Vous �tes ici!" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "Peser sur n'importe quel touche pour revenir" << endl << endl;
	cin >> tampon;
	system("cls");
}

// retourne la valeur du niveau de difficult�
Scene* Menu::startTheGameAnimation() 
{
	string input = "";
	for (int i = 0; i < 10; i++) {
		cout << "." << endl;
	}

	cout << "   Damn it Paul, Cops are coming!             " << endl;
	cout << "                   Damn, i'll take a car!" << endl;
	cout << " O                                O " << endl;
	cout << "/|/                              /| " << endl;
	cout << "/ /                               | " << endl << endl;


	cout << "   Damn, wich one ?!      " << endl;
	cout << "  O                       " << endl;
	cout << " /|/                      " << endl;
	cout << " / /                      " << endl << endl;

	cout << " 1. (insert phoneme here)(for the moment write number 1) Take your dad's car!" << endl;
	cout << " 2. (insert phoneme here)(for the moment write number 2) Take your bro's car!" << endl;
	cout << " 3. (insert phoneme here)(for the moment write number 3) Take your mom's car!" << endl;

	cin >> input;
	int numberInput = std::stoi(input);

	switch (numberInput) {
	case 1:
	{
			  input = "Your dad's car! Best choice! Easy pz mode.";
			  break;
	}
	case 2:
	{
			  input = "Your bro's car! Best choice! Medium saignant mode.";
			  break;
	}
	case 3:
	{
			  input = "Your mom's car! Best choice! Legendary mode!!";
			  break;
	}
	default :
	{
				input = "By default, it's your mom's car! Legendary mode!!"; 
				break;
	}
	}

	cout << "Vous avez pris : " << input << endl << endl;

	for (int i = 0; i < 10; i++) {
		cout << "." << endl;
	}

	return new BasicScene();
}

