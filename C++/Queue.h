#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
#include<fstream>
#include"Node.h"
using namespace std;
class Queue {
private:
	Node* head;
	Node* tail;
	ifstream in;
	ofstream out;
    int num;

public:
	Queue() {
		head = new Node;
		tail = head;
		ifstream in("input.txt");
		in >> num;
		for (int i = 0; i < num;i++) {
			tail->Readfile(in);
			tail->next = new Node;
			tail = tail->next;

		}

	}
	~Queue() {
		save();
		Node* temp;
		while (head != tail) {
			temp = head;
			head = head->next;
			delete temp;
		}
		delete tail;

	}
	void show_Menu();
	void display();
	void sort();
	void save();
	void add();
	void modify();
	void search();
    void addnum() { num++; }


};
#endif
