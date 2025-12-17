#include<iostream>
using namespace std;
bool EvenOrOdd(char name [],int length);

int main()
{
    char name[50];
    cout << "Enter the string:"<<endl;
    cin.getline(name,50);
    int length = 0;
    while(name[length]!='\0')
    {
      length++;
    }
    cout << EvenOrOdd(name,length);

}
bool EvenOrOdd(char name[],int length)
{
    if(length%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}



