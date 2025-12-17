#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double count, number;
    double p1 = 0.0;
    double p2 = 0.0;
    double p3 = 0.0;
    double p4 = 0.0;
    double p5 = 0.0;
    cout << "Enter number count:";
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        cout << "Enter a number:";
        cin >> number;

        if (number >= 1 && number <= 199)
        {
            p1++;
        }

        else if (number >= 200 && number <= 399)
        {
            p2++;
        }
        else if (number >= 400 && number <= 599)
        {
            p3++;
        }
        else if (number >= 600 && number <= 799)
        {
            p4++;
        }
        else
        {
            p5++;
        }
    }
    cout << fixed << setprecision(2);
    double percentage1 = (p1 / count) * 100;
    double percentage2 = (p2 / count) * 100;
    double percentage3 = (p3 / count) * 100;
    double percentage4 = (p4 / count) * 100;
    double percentage5 = (p5 / count) * 100;

    cout << percentage1 << endl
         << percentage2 << endl
         << percentage3 << endl
         << percentage4 << endl
         << percentage5;

    return 0;
}