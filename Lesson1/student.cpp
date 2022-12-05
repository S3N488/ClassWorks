#include "student.h"

void Student::show() {
	cout << "Name " << name << " " << age << " " << bornDate << " " << number << " " << city << " " << country<< " "<< averMark() << endl;
}

double Student::averMark() {
	double res = 0;
	for (int k = 0; k < 3; k++) {
		res += mark[k];
	}
	return res / 3;
}