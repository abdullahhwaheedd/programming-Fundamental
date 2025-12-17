// Find how much walls you can paint.

#include <iostream>
using namespace std;

main()
{
    int wall, width, height, noofwalls, paintedwalls;
    cout << "Enter no of square meters you can paint:";
    cin >> wall;
    cout << "enter width of the single wall:";
    cin >> width;
    cout << "Enter height of the single wall:";
    cin >> height;
    noofwalls = width * height;
    paintedwalls = wall / noofwalls;
    cout << "No of walls you can paint is:" << paintedwalls;
    return 0;
}