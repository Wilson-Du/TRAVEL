#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>
using namespace std;
class Person {
protected:
	string firstname;
	string surname;
	string email_address;
	string nationality;
public:
	Person(){}
	Person(string fn, string sn , string ed , string na ) {
		firstname = fn;
		surname = sn;
		email_address = ed;
		nationality = na;
	}
	virtual string getFir() = 0;
	virtual string getSur() = 0;
	virtual string getEmail() = 0;
	virtual string getNation() = 0;

};
#endif
