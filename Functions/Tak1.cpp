#include <iostream>
using namespace std;
float Totalprice(string[], int[], string, int);
const int size = 4;
int main()
{
    string name;
    int kgs;

    string fruit_names[size] = {"peach", "apple", "guava", "watermelon"};
    int price[size] = {60, 70, 40, 30};
    cout << "Enter fruitname:" << endl;
    cin >> name;
    cout << "Enter kgs:";
    cin >> kgs;
    int size = 4;
    float result = 0.0;

    result = Totalprice(fruit_names, price, name, kgs);
    cout << "Result=" << result;
    return 0;
}
float Totalprice(string fruit_names[], int price[], string name, int kgs)
{
    float final;

    for (int i = 0; i < size; i++)
    {
        if (fruit_names[i] == name)
        {
            final = price[i] * kgs;
        }
    }
    return final;
}