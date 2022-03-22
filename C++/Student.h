#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>
#include"Flight.h"
#include"Person.h"
using namespace std;
class Student: public Person{
	friend class Node;
private:
	int number;
	string destination;
	Flight departure;
	Flight return_back;
	static int count;

public:
	Student(string d_fn="",string d_d="",string d_t="",string r_fn="",string r_d="",string r_t="",string fn = "", string sn = "", string ed = "", string na= "", int n = 0, string dest = "") 
		:Person(fn,sn,ed,na),departure(d_fn,d_d,d_t),return_back(r_fn,r_d,r_t){
		number = n;
		destination = dest;
		count++;
	}
	~Student() { count--; }
	bool operator==(const Student &s);
	string getFir() { return firstname; }
	string getSur() { return surname; }
	int getNum() { return number; }
	string getEmail() { return email_address; }
	string getNation() { return nationality; }
	string getDest() { return destination; }
	string getDepartureNum() { return departure.getFnum(); }
	string getDepartureDate() { return departure.getDate(); }
	string getDepartureTime() { return departure.getTime(); }
	string getReturnNum() { return return_back.getFnum(); }
	string getReturnDate() { return return_back.getDate(); }
	string getReturnTime() { return return_back.getTime(); }
	static int getCount() { return count; }







};






#endif

