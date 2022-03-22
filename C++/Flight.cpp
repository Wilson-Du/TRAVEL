#include "Flight.h"
#include<iostream>
#include<fstream>
using namespace std;
istream& operator>>(istream& fstr, Flight& f) {
	fstr >> f.flight_num >> f.date >> f.time;
	return fstr;
}
