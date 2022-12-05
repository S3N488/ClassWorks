#pragma once
#include <iostream>
using namespace std;

class Student {

	string name;
	string bornDate;
	string number;
	string city;
	string country;
	int age;
	int mark[3];
public:  // ������������ �������: public, private, protected . ( ������������� )

	// setter - �������
	void setName(string name1) {
		name = name1;
	}

	void setAge(int age1) {
		if (age1 < 0) {
			cout << " Error";
			return;
		}
		else {
			age = age1;
		}
	}

	void setNumber(string number1) {
			number = number1;
	}


	void setBornDate(string bornDate1) {
			bornDate = bornDate1;
	}

	void setCity(string city1) {
			city = city1;
	}

	void setCountry(string country1) {
		country = country1;
	}
	// ������ getter - ���������
	string getName(){
		return name;
	}

	string getBornDate() {
		return bornDate;
	}

	string getNumber() {
		return number;
	}

	string getCity() {
		return city;
	}

	string getCountry() {
		return country;
	}

	// ������ ���� ������ - private. ������ � ��� �������������� � ������� �������� � ��������( ������ )
	/*

	void setF(int F){   // ������
	f = F;
	}

	int getF(){    // ������
	return f;
	}

	*/

	void show();

	void init(string name1, int age1, int mark1[]) {
		name = name1;
		age = age1;
		for (int k = 0; k < 3; k++)
			mark[k] = mark1[k];
	}

private:
	double averMark();
};

