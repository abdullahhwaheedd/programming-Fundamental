// Calculate number of points.
// ● Wins get 3 points.
// ● Draws get 1 point.

#include <iostream>
using namespace std;

main()
{
    string name;
    int wins, loses, draws, pointsonwins, pointsondraws, totalpoints;
    cout << "Enter team name:";
    cin >> name;
    cout << "Enter no of wins:";
    cin >> wins;
    cout << "Enter no of loses:";
    cin >> loses;
    cout << "Enter no of draws:";
    cin >> draws;
    pointsonwins = wins * 3;
    pointsondraws = draws * 1;
    totalpoints = pointsondraws + pointsonwins;
    cout << name << " has " << totalpoints << "  points in Asia cup";
    return 0;
}