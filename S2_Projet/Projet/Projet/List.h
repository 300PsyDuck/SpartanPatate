#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <iomanip>

#include "Cars.h"
using namespace std;
class Noeud
{
public:
	Noeud();
	virtual ~Noeud();

	Cars* get_Data();
	Noeud* get_Precedent();
	Noeud* get_Suivant();
	void set_Data(Cars *_data);
	void set_Precedent(Noeud *_precedent);
	void set_Suivant(Noeud *_suivant);

private:
	Cars* data;
	Noeud* precedent;
	Noeud* suivant;
};
class List
{
public:
	List();
	virtual ~List();
	void aggregation(Cars* _data);
	Noeud* supprimer(Noeud* courant);
	Noeud* get_Head();
	Noeud* get_Next();
	int get_Size();
private:
	Noeud* h;
	Noeud* n;
	Noeud* t;
	int size;
};



#endif //LIST_H
