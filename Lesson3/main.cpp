#include <iostream>
#include <fstream>
#include "Point.h"
#include "faction.h"

using namespace std;

class C1 {
	int x;
	int y;

public:

	C1(int x, int y) :x{ x }, y{ y }{}

	C1() : C1(0, 0) {

	}

	void show() {
		cout << x << " " << y << endl;
	}
};

void test1() {
	/*C1 c1(4, 5);
	c1.show();
	*/

	/*
		Cat cat;
	Dog dog;

	cat.say();
	dog.say();
	cat.Animal::say();
	((Animal)cat).say();
	*/
}

class Animal {
public:
	void say() {
		cout << "AAAAAAAA" << endl;
	}
};

class Cat :public Animal {
public:
	void say() {
		cout << "Meow" << endl;
	}
};

class Dog :public Animal {
public:
	void say() {
		cout << "Bark" << endl;
	}
};

void pointsTest() {
	const int n = 10;
	Point* pt = new Point[n];

	for (int k = 0; k < n; k++) {
		pt[k] = Point(k, 2 * k, 3 * k);
	}

	/*
	ofstream ofs("points.txt", ios_base::app);

	for (int k = 0; k < n; k++) {
		cout << pt[k].toString() << endl;
		pt[k].writeFile(ofs);
	}
	ofs.close();
	*/

	ifstream ifs("points.txt");
	while (!ifs.eof()) {
		pt[0].readFile(ifs);
		cout << pt[0].toString() << endl;
	}
	ifs.close();
	delete[] pt;
}



void main() {
	Faction val1(1, 2);
	Faction val2(2, 3);
	Faction val3;
	val3 = val1.add(val2);
	val1.show();
	cout << " + ";
	val2.show();
	cout << " = ";
	val3.show();
	cout << endl;

}