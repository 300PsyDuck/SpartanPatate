#ifndef CARS_H
#define CARS_H

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

class Cars {
public:
	Cars();
	Cars(int _x, int _y, int _speed);
	void setSpeed(int _speed);
	void deleteC();
	int getX();
	int getY();
	void moveX(int step);
	void moveY(int step);
	void moveY();
	void update(char** buffer);

private:
	int x;
	int y;
	int speed;
};

#endif //CARS_H
