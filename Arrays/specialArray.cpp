/*
Program: An array is special if at every even index there is even number and at every odd index
there is odd number
*/

#include<iostream>
using namespace std;

int main()
{   int size;
    int flag = 0;

    cout << "Enter the size of array : ";
    cin >> size ;

    int array[size];
     for(int i =0 ; i<size ; i++)
     {
        cout << " Enter value:";
        cin >> array[i];
     }
     for(int i =1 ; i>=size ; i++)
     {
      if(i%2==0 && array[i]%2!=0)
      {
         flag = 1;
      }
     }
     if(flag==1)
     {
      cout << " not special";

     }
     else 
     {
      cout << " Special";
     }
     return 0;
}