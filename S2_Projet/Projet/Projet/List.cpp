#include "List.h"

using namespace std;
// Constructeur et desctructeur de la liste
List::List()
{
	h = new Noeud();
	n = h;
	t = h;
	size = 0;
}

List::~List()
{
	while (h != NULL) {
		Noeud* s = h;
		h = h->get_Suivant();
		delete s;
	}

}

// Ajouter un élément à la liste
void List::aggregation(Cars *_data)
{
	if (h != n)
		n->set_Precedent(t);

	t->set_Suivant(n);
	t = n;
	n->set_Data(_data);
	n = new Noeud();
	size++;
}

// Supprimer un élément à la liste
Noeud* List::supprimer(Noeud* courant)
{
	Noeud* p = courant->get_Precedent();
	Noeud* s = courant->get_Suivant();

	p->set_Suivant(courant->get_Suivant());
	s->set_Precedent(courant->get_Precedent());
	size--;
	return p;
}

// Obtenir des noeud important pour la liste
Noeud* List::get_Head()
{
	return h;
}
Noeud* List::get_Next()
{
	return n;
}

// Obtenir la dimmension de la liste
int List::get_Size()
{
	return size;
}

// Constructeur et destructeur de la liste

Noeud::Noeud()
{
}

Noeud::~Noeud()
{
	delete data;
}

////SECTION pour GET/Set des membres privee de la liste

Noeud* Noeud::get_Precedent(){
	return precedent;
}
Noeud* Noeud::get_Suivant()
{
	return suivant;
}
Cars* Noeud::get_Data()
{
	return data;
}
void Noeud::set_Data(Cars* _data)
{
	data = _data;
}
void Noeud::set_Precedent(Noeud* _precedent)
{
	precedent = _precedent;
}
void Noeud::set_Suivant(Noeud* _suivant)
{
	suivant = _suivant;
}
