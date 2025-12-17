// Find final velocity.

#include <iostream>
using namespace std;

main()
{
	int acc, initialvelocity, time, finalvelocity;
	cout << "enter acc";
	cin >> acc;
	cout << "enter initialvelocity:";
	cin >> initialvelocity;
	cout << "enter time:";
	cin >> time;
	finalvelocity = (acc * time) + initialvelocity;
	cout << "finalvelocity=" << finalvelocity;
	return 0;
}
