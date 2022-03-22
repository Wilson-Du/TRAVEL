#ifndef NODE_H
#define NODE_H
#include<iostream>
#include"Student.h"
using namespace std;
class Node {
	friend class Queue;
private:
	Student data;
	Node* next;
public:
	Node():next(NULL) {}
	void Readfile(ifstream& in);
	void inputName();
	void inputSnum();
	void inputEamil();
	void inputNation();
	void inputDest();
	void inputDeparture();
	void inputReturn();
};

#endif

