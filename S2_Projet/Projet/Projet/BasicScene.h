#ifndef BASICSCENE_H
#define BASICSCENE_H

#include "Input.h"
#include "List.h"
#include "Cars.h"
#include "Scene.h"

class BasicScene : public Scene
{
	public:
		BasicScene();
		virtual void afficher();
		virtual Scene* update(float frameTime);
	private:
		List* CarsList;
		bool perdu;
};


#endif //BASICSCENE_H
