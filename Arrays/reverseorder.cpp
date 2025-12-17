#include <iostream>
using namespace std;

int main()
{
    int array[10];
    cout << "Enter number=" << endl;
    for (int i = 0; i < 10; i++)
    {

        cin >> array[i];
    }

    cout << array[9] << "," << array[8] << "," << array[7] << "," << array[6] << "," << array[5] << ","
         << array[4] << "," << array[3] << "," << array[2] << "," << array[1] << "," << array[0] ;
    return 0;
}