#include <iostream>
using namespace std;

main()
{
    string name;
    int eng, math, chem, ssc, bio, sum;
    float percentage;
    char grade;
    cout << "Enter student name:";
    cin >> name;
    cout << "Enter  marks of eng,math,chem,ssc,bio:" << endl;
    cin >> eng >> math >> chem >> ssc >> bio;
    sum = eng + math + chem + ssc + bio;
    percentage = (sum / 500.0) * 100;
    if (percentage >= 90)
    {
        cout << "Student name:" << name << endl
             << "Totalmarks:" << sum << endl
             << "Obtained percentage:" << percentage << endl
             << "Obtained grade: A+";
    }
    else if (percentage >= 80)
    {
        cout << "Student name:" << name << endl
             << "Totalmarks:" << sum << endl
             << "Obtained percentage:" << percentage << endl
             << "Obtained grade: A";
    }
    else if (percentage >= 70)
    {
        cout << "Student name:" << name << endl
             << "Totalmarks:" << sum << endl
             << "Obtained percentage:" << percentage << endl
             << "Obtained grade:B+";
    }
    else if (percentage >= 60)
    {
        cout << "Student name:" << name << endl
             << "Totalmarks:" << sum << endl
             << "Obtained percentage:" << percentage << endl
             << "Obtained grade:B";
    }
    else if (percentage >= 50)
    {
        cout << "Student name:" << name << endl
             << "Totalmarks:" << sum << endl
             << "Obtained percentage:" << percentage << endl
             << "Obtained grade:C";
    }
    else if (percentage >= 40)
    {
        cout << "Student name:" << name << endl
             << "Totalmarks:" << sum << endl
             << "Obtained percentage:" << percentage << endl
             << "Obtained grade:D";
    }
    else
    {
        cout << "Student name:" << name << endl
             << "Totalmarks:" << sum << endl
             << "Obtained percentage:" << percentage << endl
             << "Obtained grade:F";
    }
}
