#include <iostream>
using namespace std;

int main()
{
    int array[10];

    int n, i;
    int location;
    int flag = 0;
    cout << "Enter value:";
    for (i = 0; i < 10; i++)
    {

        cin >> array[i];
        cout << ",";
    }
    cout << "Enter a number";
    cin >> n;

    for (i = 0; i < 10; i++)
    {
        if (n == array[i])
        {
            cout << "The location =" << i << endl;
            flag = 1;
            break;
        }
    }
    if (flag = 0)
    {

        cout << "Number not  found";
    }
    return 0;
}