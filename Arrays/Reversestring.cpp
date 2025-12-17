#include<iostream>
using namespace std;

int main()
{
    char string[50];    
    cout << "Enter string:";
    cin.getline(string,50);
    int length = 0;
     while(string[length]!='\0')
     {
        length++;
     }

     for(int i=0; i<length/2 ; i++)
     {
        char temp= string[i];
        string[i]=string[length-i-1];
        string[length-i-1] = temp;
     }
     cout<< "Reversed string:" << string <<endl;

}


