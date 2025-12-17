
#include <iostream>
using namespace std;

int main()
{
    char str[50];
    int i;

    cout << "Enter string:" << endl;
    cin.getline(str, 50);
   

    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
     int ascii = str[length];

    for( i=0; i<length ; i++)
    {
      ascii++;
      ascii=str[i];
    }
    cout << str[i] ;

    
}