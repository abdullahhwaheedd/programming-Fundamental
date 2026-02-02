// Show the variable value,its address , its accessed value by pointer

#include<iostream>
using namespace std;


int main()
{
  int a = 10;
  int *p = &a;

  cout << a << endl;
  cout << "Memory address" <<  p << endl;
  cout << "Accessed value by pointer:"<< *p << endl;


}