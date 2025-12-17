/*
Program: Perform an  Even/odd transform into an array, n times.
Description: 
1) For even number subtract (-2) to each integer. 
2) For odd integer add (+2) to each integer.
*/

#include <iostream>
using namespace std;
int Transformation(int,int,int[]);

int main()
{
    int size;
    int transform;
    cout << " Enter the size of the array: ";
    cin >> size;
    cout << " Enter the number of times even/odd"
         << "transformation occurs:";
    cin >> transform;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout << " Enter values: ";
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            array[i] = (-2 * transform) + array[i];
        }
        else
        {
            array[i] = (2 * transform) + array[i];
        }
    }

    Transformation(size,transform,array);
}
int Transformation(int size,int transform ,int array[])
{
    cout << " AFTER TRANSFORMATION :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}
