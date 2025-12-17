#include <iostream>
using namespace std;

int main()
{
    int elements[5];
    int sum = 0;
    int i;
    int avg;
    cout << "Enter elemnts=" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> elements[i];
    }
    for (i = 0; i < 5; i++)
    {
        cout << "Eelemnts are" << elements[i] << endl;
        sum = sum + elements[i];
        avg = sum / 5.0;
    }
    cout << "The sum =" << sum << endl;
    cout << "The average=" << avg;
    return 0;
}