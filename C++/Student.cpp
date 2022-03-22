#include "Student.h"
#include<iostream>
using namespace std;
int Student::count = 0;
bool Student::operator==(const Student &s) {
	if (firstname == s.firstname && surname == s.surname && number == s.number) {
		return true;
	}
	return false;
}