#ifndef LISTE_H
#define LISTE_H

template<class DataType>
class Noeud
{
	public:
		Noeud<DataType>();
	private:
		DataType data;
		Noeud<DataType>* precedent;
		Noeud<DataType>* suivant;
};

template<class DataType>
class Liste
{
	public:
		Liste<DataType>();
		void Fonction();
	private:
		Noeud<DataType>* head;
		Noeud<DataType>* tail;
};

#endif //LISTE_H
