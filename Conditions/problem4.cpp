#include<iostream>
using namespace std;

main(){
      float n1,n2,n3;
      cout<<"Enter number of red roses:";
      cin>>n1;
      cout<<"Enter number of white roses:";
      cin>>n2;
      cout<<"Enter number of tulips:";
      cin>>n3;
      float rose = 2.00*n1;
      float tulips=2.50*n3;
      float white=4.10*n2;
      float sum=rose+tulips+white;
      float discount=(20.0/100)*sum;
      float total=sum-discount;
      if(sum>200)
      {
        cout<<"The original price was="<<sum<<endl<<"The price after 20% discount is="<<total<<"$";

      }
      else{
        cout<<"The price is="<<sum;
      } 


}