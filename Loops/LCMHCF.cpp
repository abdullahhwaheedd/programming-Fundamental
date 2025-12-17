#include <iostream>

using namespace std;

int main()
{
  int n1, n2;
  int hcf = 0;
  cout << "Enter first number:";
  cin >> n1;
  cout << "Enter second number:";
  cin >> n2;
  int temp1 = n1;
  int temp2 = n2;

  while (n1 != n2)
  {
    if (n1 > n2)
    {
      n1 = n1 - n2;
    }
    else if (n2 > n1)
    {
      n2 = n2 - n1;
    }
  }
  hcf = n1;
  int lcm = (temp1 * temp2) / hcf;

  cout << "HCF=" << hcf << endl
       << "LCM=" << lcm;
  return 0;
}