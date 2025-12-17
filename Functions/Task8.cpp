/*
Program: How long it takes to colour whole pattern
Description:
1) It takes 1 second to switch between pencils.
2) It takes 2 seconds to colour a square
*/

#include <iostream>
using namespace std;
int colourpatterntimes(int, int, string[], int, int, int, int, int, int);

int main()
{
    int result;
    int size1;
    int size2;
    int totalsize;
    int timeToSwitchpencils = 1;
    int totalTime1;
    int totalTime11;
    int timeToFillSquare = 2;
    int totalTime2;
    int totaltime;
    cout << " Enter the number of colours you want to enter: ";
    cin >> size1;

    totalsize = size1 - 1;
    size2 = size1;

    string colours[size1];
    for (int i = 0; i < size1; i++)
    {
        cout << " Enter colors: ";
        cin >> colours[i];
    }
    for (int i = 1; i <= size1; i++)
    {
        if (colours[i] == colours[i + 1])
        {
            size1 = totalsize - 1;
        }
    }
    result = colourpatterntimes(size1, size2, colours, timeToSwitchpencils, totalTime1, totalsize, timeToFillSquare, totalTime2, totaltime);
    cout << "Result = " << result;
}
int colourpatterntimes(int size1, int size2, string colours[], int timeToSwitchpencils, int totalTime1, int totalsize, int timeToFillSquare, int totalTime2, int totaltime)
{

    totalTime1 = 1 * size1;
    totalTime2 = 2 * size2;
    totaltime = (totalTime1 + totalTime2) - 1;
    return totaltime;
}
