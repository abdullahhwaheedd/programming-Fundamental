#include <iostream>
using namespace std;

int main()
{
    char str1[50], str2[50];
    cout << "Enter first string: ";
    cin.getline(str1, 50);
    cout << "Enter second string: ";
    cin.getline(str2, 50);

    int count1[256] = {0}, count2[256] = {0};

    int i = 0;
    while (str1[i] != '\0')
    {
        count1[(unsigned char)str1[i]]++;
        i++;
    }

    i = 0;
    while (str2[i] != '\0')
    {
        count2[(unsigned char)str2[i]]++;
        i++;
    }

    bool flag = true;
    for (int j = 0; j < 256; j++)
    {
        if (count1[j] != count2[j])
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "Strings are anagrams." << endl;
    else
        cout << "Strings are not anagrams." << endl;

    return 0;
}
