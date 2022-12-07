#pragma once
#include <iostream>
using namespace std;

class Rectangle{
protected:
	int width;
	int height;
	int x;
	int y;
public:
	Rectangle() {
		cout << "Construct Rectangle ()" << endl;
	};
	Rectangle(int x, int y, int weight, int height);
	int area();
};

