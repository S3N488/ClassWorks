#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Point
{
	double x, y, z;
public:
	Point(double x, double y, double z) :x{ x }, y{ y }, z{ z }{}
	Point() :Point(0, 0, 0) {}
	string toString() {
		string str = to_string(x) + " " + to_string(y) + " " + to_string(z);
		return str;

	}

	bool writeFile(string filename) {
		ofstream ofs(filename, ios_base::app);
		if (ofs.is_open()) {
			ofs << toString() << endl;
			//ofs.close();
			return true;
		}
		return false;
	}
/*
	bool readFile(string filename) {
		ifstream ifs(filename);
		if (ifs.is_open()) {
			ifs >> x;
			ifs >> y;
			ifs >> z;
			ifs.close();
			return true;
		}
		return false;
	}
*/

	bool writeFile(ofstream& ofs) {
		if (ofs.is_open()) {
			ofs << toString() << endl;
			//ofs.close();
			return true;
		}
		return false;
	}

	bool readFile(ifstream& ifs) {
		if (ifs.is_open()) {
			ifs >> x;
			ifs >> y;
			ifs >> z;
			return true;
		}
		return false;
	}
};

