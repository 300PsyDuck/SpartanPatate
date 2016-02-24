#ifndef SCENE_H
#define SCENE_H

class Scene
{
	public:
		Scene();
		virtual void afficher();
		virtual void input(float frameTime); 
		virtual Scene* update(float frameTime);
};

#endif //SCENE_H
