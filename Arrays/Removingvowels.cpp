/*
Program : Remove vowel words from a sentence.
*/

#include<iostream>
using namespace std;

int main()
{
     char str[50];
    

    cout << "Enter sentence :";
    cin.getline(str, 50);

    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    

    for(int i = 0 ; i< length ; i++)
    {
        
       if(str[i]=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
        {
            continue;
            
        }
     cout << str[i];
    }
    

   

}