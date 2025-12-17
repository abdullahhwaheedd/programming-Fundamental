#include <iostream>
#include <cmath>
using namespace std;

main()
{
  int hourt, mint, houra, mina, total1, total2;
  cout << "Enter the exam starting time in hours from 0-23:";
  cin >> hourt;
  cout << "enter the minutes of exam starting:";
  cin >> mint;
  cout << "Enter the arrival time in hours from 0-23:";
  cin >> houra;
  cout << "Enter the minutes of arrival:";
  cin >> mina;
  if (hourt >= 0 && hourt <= 23 && mint >= 0 && mint <= 60 && houra < hourt || mina < mint)
  {
    total1 = abs(hourt - houra);
    total2 = abs(mint - mina);
    cout << "Early" << endl
         << total1 << " hours and " << total2 << " minutes before starting of paper ";
  }
  else if (hourt >= 0 && hourt <= 23 && mint >= 0 && mint <= 60 && houra > hourt || mina < mint)

  {
    total1 = abs(hourt - houra);
    total2 = abs(mint - mina);
    cout << "late" << endl
         << total1 << " hours and " << total2 << " minutes after starting of paper ";
  }
  else if (hourt >= 0 && hourt <= 23 && mint >= 0 && mint <= 60 && houra < hourt || mina > mint)
  {
    total1 = abs(hourt - houra);
    total2 = abs(mina - mint);
    cout << "late" << endl
         << total1 << " hours and " << total2 << " minutes after starting of paper ";
  }
  else if (hourt >= 0 && hourt <= 23 && mint >= 0 && mint <= 60 && houra == hourt || mina == mint)
  {
    total1 = hourt;
    total2 = mint;
    cout << "ontime" << endl;
  }
  else if (hourt >= 0 && hourt <= 23 && mint >= 0 && mint <= 60 && houra == hourt || mina > mint)
  {
    total1 = hourt;
    total2 = abs(mina - mint);
    cout << "late" << endl
         << total1 << " hours and " << total2 << " minutes after starting of paper ";
  }
  else if (hourt >= 0 && hourt <= 23 && mint >= 0 && mint <= 60 && houra < hourt || mina == mint)

  {
    total1 = abs(hourt - houra);
    total2 = mint;
    cout << "late" << endl
         << total1 << " hours and " << total2 << " minutes after starting of paper ";
  }
  else if (hourt >= 0 && hourt <= 23 && mint >= 0 && mint <= 60 && houra > hourt || mina == mint)
  {
    total1 = abs(hourt - houra);
    total2 = mint;
    cout << "late" << endl
         << total1 << " hours and " << total2 << " minutes after starting of paper ";
  }
  else if (hourt >= 0 && hourt <= 23 && mint >= 0 && mint <= 60 && houra < hourt || mina > mint)

  {
    total1 = abs(hourt - houra);
    total2 = abs(mina - mint);
    cout << "late" << endl
         << total1 << " hours and " << total2 << " minutes after starting of paper ";
  }
  else if (hourt >= 0 && hourt <= 23 && mint >= 0 && mint <= 60 && houra == hourt || mina == mint)

  {
    total1 = hourt;
    total2 = mint;
    cout << "late" << endl
         << total1 << " hours and " << total2 << " minutes after starting of paper ";
  }
  else if (hourt >= 0 && hourt <= 23 && mint >= 0 && mint <= 60 && houra > hourt || mina == mint)

  {
    total1 = abs(hourt - houra);
    total2 = mint;
    cout << "late" << endl
         << total1 << " hours and " << total2 << " minutes after starting of paper ";
  }
  else if (hourt >= 0 && hourt <= 23 && mint >= 0 && mint <= 60 && houra < hourt || mina == mint)

  {
    total1 = abs(hourt - houra);
    total2 = mint;
    cout << "late" << endl
         << total1 << " hours and " << total2 << " minutes after starting of paper ";
  }
  else if (hourt >= 0 && hourt <= 23 && mint >= 0 && mint <= 60 && houra == hourt || mina > mint)

  {
    total1 = hourt;
    total2 = abs(mint - mina);
    cout << "late" << endl
         << total1 << " hours and " << total2 << " minutes after starting of paper ";
  }
  else if (hourt >= 0 && hourt <= 23 && mint >= 0 && mint <= 60 && houra == hourt || mina < mint)

  {
    total1 = hourt;
    total2 = abs(mint - mina);
    cout << "late" << endl
         << total1 << " hours and " << total2 << " minutes after starting of paper ";
  }

  return 0;
}