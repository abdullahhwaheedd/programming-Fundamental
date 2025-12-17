#include <iostream>
using namespace std;
string Sevenboom(int, int[]);

int main()
{
  int size;
  cout << "Enter the size of the array:";
  cin >> size;
  int digits[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Enter the digits:" << endl;
    cin >> digits[i];
  }
  Sevenboom(size, digits);
}
string Sevenboom(int size, int digits[])
{
  int i = 0;
  int rem;
  int flag;
  int n;
  while (digits[i] != 0)
  {
    rem = digits[i] % 10;
    if (rem == 7)
    {
      flag = 1;
      break;
    }
    i++;
  }
  if (flag == 1)
  {
    cout << "Boom";
  }
  else
  {
    cout << "No 7 in the array";
  }
}