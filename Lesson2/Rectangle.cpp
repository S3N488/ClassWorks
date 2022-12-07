#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(int x, int y, int height, int width) {
	cout << "Construct Rectangle (int x, int y, int height, int width)" << endl;
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}
int Rectangle::area() {
	return width * height;
}

