#ifndef MENU_H
#define MENU_H

#include "Scene.h"

class Menu : public Scene
{
public:
	Menu();
	virtual void afficher();
	virtual Scene* update(float frameTime);
	int startTheMenu();
	Scene* startTheGameAnimation();
	void showHelpMenu();
	Scene* showMenuPrincipal();
};


#endif //Menu_H
