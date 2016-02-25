#include "Time.h"
#include "Cars.h"

// Constructeur des entité de voiture
Cars::Cars() {

}
Cars::Cars(int _x, int _y, int _speed) {
	x = _x;
	y = _y;
	speed = _speed;
}

// Section Get/Set pour une voiture
void Cars::setSpeed(int _speed) {
	speed = _speed;
}

int Cars::getX() {
	return x;
}
int Cars::getY() {
	return y;
}

// Section pour faire bouger la voiture en XY
void Cars::moveX(int step) {
	x += step;
	if (x < 0) 
		x = 0;
	else if (x > 78)
		x = 78;
}

void Cars::moveY(int step) {
	y += step;
	if (y < 0)
		y = 22;
	else if (y > 22)
		y = 0;
}

void Cars::moveY() {
	y += speed;

	if (y > 22)
	{
		y = 0;
		x = (int) ((long) Time::GetTime() % 8 * 10);
	}
}

// Actualise le buffer pour y ajouter la voiture aux bonnes coordonnées
void Cars::update(char** buffer)
{
	buffer[y][x] = '*';
	buffer[y][x+1] = '*';
	buffer[y+1][x] = '*';
	buffer[y+1][x+1] = '*';
}



