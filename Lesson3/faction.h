#pragma once
#include <iostream>
using namespace std;

class Faction
{
	int cisl;
	int znam;
public:

	Faction(int cisl, int znam) :cisl{ cisl }, znam{ znam }{

	}
	Faction() :Faction(1, 0) {}

	void show() {
		cout << cisl << "/" << znam;
	}

	int add(Faction val) {
		Faction res = val;
		res.znam = znam * val.znam;
		res.cisl = cisl * val.znam + val.cisl * znam;
		return res;
	}
};

