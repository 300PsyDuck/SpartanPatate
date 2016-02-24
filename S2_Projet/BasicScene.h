#ifndef BASICSCENE_H
#define BASICSCENE_H

#include "Scene.h"

class BasicScene : public Scene
{
	public:
		BasicScene();
		virtual void afficher();
		virtual void input(float frameTime);
		virtual Scene* update(float frameTime);
};


#endif //BASICSCENE_H
