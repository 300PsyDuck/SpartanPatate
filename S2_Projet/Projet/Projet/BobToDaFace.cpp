#include <stdlib.h>
#include <windows.h> 
#include "Cars.h"
#include "List.h"


int main() {
	Cars* yellowC = new Cars(10,15,12);
	Cars* rbC = new Cars(9, 19, 12);
	Cars* rbC1 = new Cars(4, 19, 12);
	Cars* rbC2 = new Cars(15, 19, 12);
	List* list = new List();
	list->aggregation(yellowC);
	list->aggregation(rbC);
	list->aggregation(rbC1);
	list->aggregation(rbC2);
	while (true) {
	
		system("CLS");
		//Sleep(10);
		list->drawC();
		list->get_Head()->get_Data()->getKeyPress();
		
	}
	return 0;
}
