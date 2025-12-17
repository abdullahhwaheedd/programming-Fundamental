#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int array[4];
    cout << "Enter value";

    for (int i = 0; i < 4; i++)
    {
        cin >> array[i];
    }
    cout << "Values are:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << array[i] << endl;
    }
    int largest = array[0];
    int second = 0;
    for (int i = 0; i < 4; i++)
    {
        if (array[i] > largest)
        {   second=largest;
            largest = array[i];
            
        }
        else if(array[i]>second && array[i] != largest)
        {
            second=array[i];
        }
       
    }
     cout<<"Second largest:"<<second;
     

    
       
    
}