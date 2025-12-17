#include <iostream>
using namespace std;

main()
{
   float h, x, y;
   cout << "Enter h:";
   cin >> h;
   cout << "Enter x:";
   cin >> x;
   cout << "Enter y:";
   cin >> y;
   if (x > 0 && x < 2 * h && y > 0 && y < h)
   {
      cout << "INSIDE";
   }

   else if ((x == 0 || x == 2 * h) && (y >= 0 && y <= h) || (y == 0 || y == h) && (x >= 0 && x < +2 * h))
   {
      cout << "BOUNDARY";
   }

   else

   {
      cout << "OUTSIDE";
   }

   return 0;
}