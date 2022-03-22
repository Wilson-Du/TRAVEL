#include<iostream>
#include"Student.h"
#include"Queue.h"
#include<string.h>
using namespace std;
int main() {
	Queue q1;
	int ch;
	char exit;
	while (1) {
		q1.show_Menu();
		cout << "There are " << Student::getCount()-1 << " students" << endl;
		cout << "Please enter your choice:" << endl;
		cin >> ch;
		switch (ch) {
		case 0:return 0; break;
		case 1:system("cls"); q1.display(); break;
		case 2:system("cls"); q1.search(); break;
		case 3:system("cls"); q1.add(); break;
		case 4:system("cls"); q1.modify(); break;
		case 5:system("cls"); q1.sort(); break;
		default:cout << "Option does not Exist, Plsease Choose another option (1 - 6)" << endl;
			cin >> ch;

		}
		cout << "Do you want to exit? y/n" << endl;
		cin >> exit;
		if (exit == 'y')
		{
			break;
		}
		system("cls");
	}
	return 0;

}