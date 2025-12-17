/*
Program : Resistance in series
*/

#include<iostream>
using namespace std;

int main()
{   int resistors;
    double sum = 0;
    cout << "Enter the quantity of resistors: ";
    cin >> resistors;
    double resistance[resistors];

    for ( int i = 0 ; i<resistors ; i++)
    {
        cout << "Enter Number:" ;
        cin >> resistance[i];
    }
    for ( int j = 0 ; j<resistors ; j++)
     {  

        sum+= resistance[j] ;
     }
     cout << "Sum of resistances in ohm : " << sum << " ohms" ;

     return 0;
    } 
