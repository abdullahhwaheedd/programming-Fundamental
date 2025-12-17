#include<iostream>
using namespace std;

int main()
{
    int array[5]={1,2,3,3,5};
    int counted[5]={0};
    

    for(int i = 0 ; i < 5 ; i++)
    {
        if(counted[i])
         continue;
         int count = 1;
        
    for(int j = i+1 ; j < 5 ; j++){
    
            if(array[i]==array[j])
            { count++;
            
            }
        }
            
    
       
    
    cout << array[i] << " occurs " << count <<" times" << endl;
    

}
}