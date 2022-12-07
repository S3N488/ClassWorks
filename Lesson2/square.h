#pragma once
#include <iostream>
#include "Rectangle.h"
using namespace std;

class Square : public Rectangle{
public:
	Square(int x, int y, int w) {
		cout << "Construct Square" << endl;
		this->x = x;
		this->y = y;
		width = w;
		height = w;
	}

	int area() {
		return width * width;
	}
};

