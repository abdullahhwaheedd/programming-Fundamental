// Find chances of being an imposter

#include <iostream>
using namespace std;

main()
{
	float impostercount, totalplayers;
	float chances;
	cout << "Enter imposter count";
	cin >> impostercount;
	cout << "Enter total players:";
	cin >> totalplayers;
	chances = impostercount / totalplayers * 100;
	cout << "Chances of being an imposter=" << chances;
	return 0;
}
