// Find cost of fertilizer per pound and per square foot.

#include <iostream>
using namespace std;

int main()
{
    float sizeoffertilizerbag, costofbag,
        areainsquare, costperpound, costpersquare;
    cout << "Enter size of the fertilizer bag in pounds:";
    cin >> sizeoffertilizerbag;
    cout << "Enter cost of bag :";
    cin >> costofbag;
    cout << "Enter area in square fee"
            "that can be covered by the bag:";
    cin >> areainsquare;
    costperpound = costofbag / sizeoffertilizerbag;
    costpersquare = areainsquare * sizeoffertilizerbag;
    cout << "The cost of fertilizer per pound=" << costperpound << endl
         << "The cost of fertlizing per square foot=" << costpersquare;
    return 0;
}