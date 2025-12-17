#include<iostream>
using namespace std;

int main()
{
    int array[5];
    int largest;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter a value:"<<endl;
        cin>>array[i];

    }
    largest=array[0];
    for(int i= 0;i<5;i++)
   
        if(array[i]>largest)
        {   largest=array[i];

        }
            cout<<"Largest value="<<largest;
        

   
    return 0;
}