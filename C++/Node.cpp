#include "Node.h"
#include<iostream>
#include<fstream>
using namespace std;
void Node::Readfile(ifstream& in) {
	in >> data.firstname >> data.surname >> data.number >> data.email_address >> data.nationality
		>> data.destination;
	in >> data.departure >> data.return_back;
}
void Node::inputName() {
	cout << "Please enter student's firstname:" << endl;
	cin >> data.firstname;
	cout << "Please enter student's surname:" << endl;
	cin >> data.surname;
}
void Node::inputSnum() {
	cout << "Please enter student's ID number:" << endl;
	cin >> data.number;
}
void Node::inputEamil() {
	cout << "Please enter student's email:" << endl;
	cin >> data.email_address;
}
void Node::inputNation() {
	cout << "Please enter student's Nationality:" << endl;
	cin >> data.nationality;
}
void Node::inputDest() {
	cout << "Please enter student's Destination:" << endl;
	cin >> data.destination;
}
void Node::inputDeparture() {
	cout << "Please enter student's departure flight number:" << endl;
	cin >> data.departure.flight_num;
	cout << "Please enter student's deparutre date:" << endl;
	cin >> data.departure.date;
	cout << "Please enter student's departure time:" << endl;
	cin >> data.departure.time;

}
void Node::inputReturn() {
	cout << "Please enter student's return flight number:" << endl;
	cin >> data.return_back.flight_num;
	cout << "Please enter student's return date:" << endl;
	cin >> data.return_back.date;
	cout << "Please enter student's return time:" << endl;
	cin >> data.return_back.time;

}