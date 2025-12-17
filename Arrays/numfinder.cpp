#include <iostream>
using namespace std;

int main()
{
    int array[8];
    int num;
    int flag = 0;

    for (int i = 0; i < 8; i++)
    {
        cout << "Enter values:";
        cin >> array[i];
    }
    cout << "The values you entered are:" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << array[i] << endl;
    }
    cout << "enter the number you want to find:" << endl;
    cin >> num;

    for (int i = 0; i < 8; i++)
    {
        if (num == array[i])
        {
            cout << num << " " << "Number found" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << num << "Number not found";
    }
    return 0;
}