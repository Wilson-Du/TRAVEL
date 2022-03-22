#include "Queue.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void Queue::show_Menu() {
	cout << "                                                                         Select a Menu Option(1-6 or select 0 to exit):" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "                                                                               1. Show Student information" << endl;
	cout << "                                                                               2. Search by Student first name" << endl;
	cout << "                                                                               3. Add Student" << endl;
	cout << "                                                                               4. Amend Student information" << endl;
	cout << "                                                                               5. Sort by student number" << endl;
	cout << "                                                                               0. Exit" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
}
void Queue::display() {
	if (head == tail) {
		cout << "empty" << endl;
	}
	cout << "All the trip details you want:" << endl;
	cout << "|Firstname|	|Surname|	|Number|	|Email address|			|Nationality|	|Destination|	|Departure flight|	|Date|		|Time|	|Return Flight|	|Date|		|Time|" << endl;

	for (Node *p=head; p->next != NULL; p = p->next)
	{
		cout << setw(6) << setiosflags(ios::left) << p->data.getFir() << "		" << setw(10) << setiosflags(ios::left) << p->data.getSur() << "	" << setw(3) << setiosflags(ios::left) << p->data.getNum() << "		" << setw(25) << setiosflags(ios::left) << p->data.getEmail() << "	";
		cout << setw(8) << setiosflags(ios::left) << p->data.getNation() << "	" << setw(8) << setiosflags(ios::left) << p->data.getDest() << "	" << setw(5) << setiosflags(ios::left) << p->data.getDepartureNum() << "			";
		cout << setw(10) << setiosflags(ios::left) << p->data.getDepartureDate() << "      " << setw(5) << setiosflags(ios::left) << p->data.getDepartureTime() << "	" << setw(5) << setiosflags(ios::left) << p->data.getReturnNum() << "		";
		cout << setw(10) << setiosflags(ios::left) << p->data.getReturnDate() << "	" << setw(5) << setiosflags(ios::left) << p->data.getReturnTime() << endl;
	}

}
void Queue::sort() {
	Node* q, *p;
	p = head;
	for (p; p != tail; p = p->next) {
		for (q = p->next; q != tail;q = q->next) {
			if (q->data.getNum()< p->data.getNum()) {
				Student s = p->data;
				p->data = q->data;
				q->data = s;


			}
		}
	}
	cout << "sort sucessfully!" << endl;
}
void Queue::save() {
	out.open("input.txt");
	if (head == tail) {
		cout << "Empty" << endl;
		return;
	}
	else {
		out << num<<endl;
		for (head; head != tail; head = head->next) {
			out << head->data.getFir() << '\t'<< head->data.getSur() <<'\t' << head->data.getNum() << '\t' << head->data.getEmail() ;
			out << '\t' << head->data.getNation() << '\t' << head->data.getDest() << '\t'<< head->data.getDepartureNum() ;
			out <<'\t' << head->data.getDepartureDate() << '\t'<< head->data.getDepartureTime() << '\t'<< head->data.getReturnNum() ;
			out <<'\t' << head->data.getReturnDate() << '\t' << head->data.getReturnTime() << endl;

		}
	}
}
void Queue::add(){
	char a;
	while(1){
		Node* temp = new Node;
		temp->inputName();
		temp->inputSnum();
		temp->inputEamil();
		temp->inputNation();
		temp->inputDest();
		temp->inputDeparture();
		temp->inputReturn();
		for (Node* p = head; p != tail; p = p->next) {
			if (p->data == temp->data) {
				cout << "Student has been exist" << endl;				
				return;
			}
		}
		tail->data = temp->data;
		delete temp;
		tail->next = new Node;
		tail = tail->next;
		addnum();
		cout << "Do you want to add more?,y/n" << endl;
		cin >> a;
		switch (a) {
		case'y':break;
		case'n':return; break;
		default:cout << "error,Please enter again..y/n" << endl;
			cin >> a;
		}
	}
}
void Queue::modify() {
	string name;
	cout << "Please enter the first name you want to find:" << endl;
	cin >> name;
	Node* p = head;
	for (p; p != tail; p = p->next) {
		if (p->data.getFir() == name) {
			p->inputDest();

			break;
		}
	}
}
void Queue::search() {
	string name;
	cout << "Please enter the first name you want to find:" << endl;
	cin >> name;
	Node* p = head;
	if (p == tail) {
		cout << "empty" << endl;
	}
	else {
		for (p; p != tail; p = p->next) {
			if(p->data.getFir()==name){
				cout << "|Firstname|	|Surname|	|Number|	|Email address|			|Nationality|	|Destination|	|Departure flight|	|Date|		|Time|	|Return Flight|	|Date|		|Time|" << endl;
				cout << setw(6) << setiosflags(ios::left) << p->data.getFir() << "		" << setw(10) << setiosflags(ios::left) << p->data.getSur() << "	" << setw(3) << setiosflags(ios::left) << p->data.getNum() << "		" << setw(25) << setiosflags(ios::left) << p->data.getEmail() << "	";
				cout << setw(8) << setiosflags(ios::left) << p->data.getNation() << "	" << setw(8) << setiosflags(ios::left) << p->data.getDest() << "	" << setw(5) << setiosflags(ios::left) << p->data.getDepartureNum() << "			";
				cout << setw(10) << setiosflags(ios::left) << p->data.getDepartureDate() << "      " << setw(5) << setiosflags(ios::left) << p->data.getDepartureTime() << "	" << setw(5) << setiosflags(ios::left) << p->data.getReturnNum() << "		";
				cout << setw(10) << setiosflags(ios::left) << p->data.getReturnDate() << "	" << setw(5) << setiosflags(ios::left) << p->data.getReturnTime() << endl;
				break;
			}
		}
	}
}