#include<iostream>
#include<cmath>
using namespace std;

main(){
    int holidays;
    int playonholiday=127;
    int playonworking=63;
    cout<<"Enter holidays:";
    cin>>holidays;
    int workingdays=365-holidays;
    int totalholiday=127*holidays;
    int totalworking=63*workingdays;
    int sum=totalholiday+totalworking;
    int norm=30000;
    int difference=abs(norm-sum);
    int hours=difference/60;
    int minutes=difference%50;


    if(sum<30000)
    {
        cout<<"Tom sleeps well"<<endl;
        cout<< hours <<" hours "<< minutes <<" minutes less for play";
    }
    else
    {
        cout<<"Tom will run away"<<endl;
        cout<<hours<<" hours "<< minutes <<" minutes for play";
    }
}

