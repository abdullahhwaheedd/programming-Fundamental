#include <iostream>
using namespace std;
float dicount(string[], string, int);
const int size = 5;
const int ticketprice = 500;

int main()
{
    int total;
    string name;
    string movies[size] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    cout << "Enter movie name:";
    cin >> name;
    dicount(movies, name, total);
}
float dicount(string movies[], string name, int total)
{
    int flag = 0;
    float discount1, discount2;
    for (int i = 0; i <= size; i++)
    {
        if (i % 2 == 0 && name == movies[i])
        {
            flag = 1;
            break;
                }
    }
    if (flag == 1)
    {
        discount1 = ticketprice * (10.0 / 100);
        total = ticketprice - discount1;
        cout << "After 10% dicount total price:" << total;
    }
    else
    {
        discount2 = ticketprice * (5.0 / 100);
        total = ticketprice - discount2;
        cout << "After 5% dicount total price:" << total;
    }
}
