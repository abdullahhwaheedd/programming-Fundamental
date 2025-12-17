#include<iostream>
using namespace std;
const float pi=3.1414;

main(){
    string shape;
    cout<<"Enter name of shape:";
    cin>>shape;
    if(shape=="square")
    {
        float s; 
        float A;
        cout<<"Enter a number:";
        cin>>s;
        A=s*s;
        cout<<A;
        
    }
    else if(shape=="rectangle")
    {
        float l,w;
        float A;
        cout<<"Enter two numbers"<<endl;
        cin>>l>>w;
        A=l*w;
        cout<<A;

    }
    else if(shape=="circle")
    {
        float r; 
        float A;
        cout<<"Enter a number:";
        cin>>r;
        A=pi*r*r;
        cout<<A;
    }
    else if(shape=="triangle")
    {
    float b,h,A;
    cout<<"Enter two numbers"<<endl;
    cin>>b>>h;
    A=(1/2.0)*b*h;
    cout<<A;
    }





}