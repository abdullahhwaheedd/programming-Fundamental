#include <iostream>
using namespace std;

int main()
{
    int element[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter  element=" << endl;
        cin >> element[i];
    }
    cout << "First element=" << element[0] << endl;
    cout << "Last element=" << element[4] << endl;
    return 0;
}