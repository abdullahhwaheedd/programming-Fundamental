#include <iostream>
using namespace std;
string Common(char[], char[], int, int);

int main()
{
    int count = 0;

    char array1[50];
    char array2[50];

    int length1 = 0;
    int length2 = 0;
    cout << "Enter elements of first array:" << endl;
    cin.getline( array1,50);
    cout << "Enter elements of second array:" << endl;
     cin.getline( array2,50);
    

    while (array1[length1] != '\0')
    {
        length1++;
    }
    while (array2[length2] != '\0')
    {
        length2++;
    }

    Common(array1, array2, length1, length2);
}

string Common(char array1[], char array2[], int length1, int length2)
{
    for (int i = 0; i < length1; i++)
    {
        if (array1[i] == array2[i])
        {
            cout << "Common elements are = " << array1[i] << endl;
        }
    }
}
