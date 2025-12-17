#include<iostream>
using namespace std;

int main()
{
    int array[5]={4,5,3,7,9};
    int n = 5;

    for(int i=0;i<n-1;i++){
     for(int j=0;j<5-i;j++)
     {
        if(array[j]>array[j+1])
        {
            int temp = array[j];
            array[j]=array[j+1];
            array[j+1]=temp;

        }
     }
    }
    cout << "After sorting:";
    for( int i =0 ; i<n ; i++)
    {
        cout<< array[i];
    }

     
}
