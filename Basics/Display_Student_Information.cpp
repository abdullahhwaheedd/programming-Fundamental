// Display student information.

#include <iostream>
using namespace std;

main()
{

	string name;
	int rollno;
	float aggregate;
	char section;
	cout << "enter name  :";
	cin >> name;
	cout << "enter roll no :";
	cin >> rollno;
	cout << "enter aggregate:";
	cin >> aggregate;
	cout << "enter section:";
	cin >> section;
	cout << "student infomation:" << endl;
	cout << "Name:" << name << endl
		 << "Roll no:" << rollno << endl
		 << "Aggregate:" << aggregate << endl
		 << "Section:" << section << endl;
	return 0;
}