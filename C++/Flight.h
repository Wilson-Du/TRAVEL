#ifndef FLIGHT_H
#define FLIGHT_H
#include<iostream>
#include<string>

using namespace std;
class Flight {
	friend istream& operator>>(istream& fstr, Flight& f);
	friend class Node;
private:
	string flight_num;
	string date;
	string time;
public:
	Flight(string fn = "", string d = "", string t = "") {
		flight_num = fn;
		date = d;
		time = t;
	}
	string getFnum() { return flight_num; }
	string getDate() { return date; }
	string getTime() { return time; }






};



#endif

