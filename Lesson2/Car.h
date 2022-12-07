#pragma once
#include <iostream>
using namespace std;

class Car {
public:
	enum CarType { Sedan, Hatchback, Cabriolet, Minivan, Coupe };
private:
	const char* number = "911";
	CarType type = CarType::Sedan;
	int* bad_day;
	const char* getType() {
		switch (type) {
		case Car::Sedan: return "Sedan";
		case Car::Hatchback:return "Hatchback";
		case Car::Cabriolet:return "Cabriolet";
		case Car::Minivan:return "Minivan";
		case Car::Coupe:return "Coupe";
		}
	}
public:
	void show() {
		cout << number << " " << getType() << " " << endl;
		for (int k = 0; k < _msize(bad_day) / sizeof(int); k++) {
			cout << bad_day[k] << " ";
		}
		cout << endl;
	}

	Car() {
		bad_day = new int[0];
		cout << "before contruct1" << endl;
	}

	Car(const char* number, CarType type) {
		bad_day = new int[0];
		this->number = number;
		this->type = type;
		cout << "before contruct2" << endl;
	}

	void addBadDay(int val) {
		int sz = _msize(bad_day) / sizeof(int);
		int* buff = new int[sz + 1];
		for (int k = 0; k < sz; k++) {
			buff[k] = bad_day[k];
		}
		buff[sz] = val;
		delete[] bad_day;
		bad_day = buff;
	}

	~Car() {
		delete[]bad_day;
		cout << "after destruct1" << endl;
	}
};

