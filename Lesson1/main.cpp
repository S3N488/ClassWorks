#include <iostream>
#include <fstream>
#include <string>
#include "student.h"
#include "Point.h"


using namespace std;

void main() {

	Student st1;
	int m[]{ 3,4,3 };
	st1.init("Ivanov", 19, m);
	st1.setBornDate("03.07.1999");
	st1.setCity("Rostov");
	st1.setCountry("Russia");
	st1.setNumber("79892281488");
	//st1.show();
	//cout << st1.getName() << st1.getNumber() << st1.getCity() << endl;
	//cout << "______________________________________________________________" << endl;

	Point Pt;
	Pt.setCoord(15,10,5);
	Pt.show();
	Pt.writeFile("Point.txt");
	Pt.readFile("Point.txt");


	


}