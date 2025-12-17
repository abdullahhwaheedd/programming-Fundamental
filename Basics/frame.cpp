// Find  total no of frames

#include <iostream>
using namespace std;

main()
{
	int min, sec, total;
	cout << "enter min:";
	cin >> min;
	cout << "enter sec:";
	cin >> sec;
	total = (min * 60) * sec;
	cout << "total no. of frames=" << total;
	return 0;
}
