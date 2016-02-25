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
		void clear();
		void draw();
		const int HEIGHT = 23;
		const int WIDTH = 80;
	private:
		char** buffer; 
};


#endif //BASICSCENE_H
