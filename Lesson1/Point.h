#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Point
{
	double x;
	double y;
	double z;

public:
	void setCoord(double x,double y,double z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	double getX() {
		return x;
	}

	double getY() {
		return y;
	}

	double getZ() {
		return z;
	}

	void show();

	bool writeFile(string filename) {
		Point Pt;
		ofstream ofs(filename, ios_base::app);
		if (ofs.is_open()) {
			ofs << "X:" << x << " " << "Y:" << y << " " << "Z:" << z << endl;
			ofs.close();
			return true;
		}
		return false;
	}

	bool readFile(string filename) {
		ifstream ifs(filename);
		if (ifs.is_open()) {
			ifs >> x;
			ifs >> y;
			ifs >> z;
			ifs.close();
			return true;
			cout << x << y << z << endl;
		}
		return false;
	}
};

