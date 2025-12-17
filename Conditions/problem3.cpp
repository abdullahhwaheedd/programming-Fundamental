#include<iostream>
#include<cmath> 
using namespace std;

main(){
    float temp1,temp2;
    cout<<"Enter temperature of first city:";
    cin>>temp1;
    cout<<"Enter temperature of second city:";
    cin>>temp2;
    float difference=abs(temp1-temp2);
    if(difference>10)
    {
        cout<<"Difference is too  big "<<endl<<"Program ends";

    }

    else
    {
        cout<<"Program ends";
    }
    return 0;
}
   