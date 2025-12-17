// Find area of a rectangle.

#include <iostream>
using namespace std;

int main()
{
    int length;
    int width;
    int area;
    cout << "Enter width of rectangle:";
    cin >> width;
    cout << "Enter length of rectangle:";
    cin >> length;
    area = length * width;
    cout << "Area=" << area;
    return 0;
}