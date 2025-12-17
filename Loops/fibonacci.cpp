#include <iostream>
using namespace std;

int main()
{
  int n;
  int a = 0;
  int b = 1;
  int sum;

  cout << "Enter a number :" << endl;
  cin >> n;
  cout << a << "," << b;
  for (int i = 1; i < n; i++)
  {
    sum = a + b;
    a = b;
    b = sum;

    cout << "," << sum;
  }

  return 0;
}
