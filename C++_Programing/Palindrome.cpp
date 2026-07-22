//Input: x = 121
//Output: true
//Explanation: 121 reads as 121 from left to right and from right to left.


#include <iostream>
using namespace std;


int main() 
{
   
    int a,b,i,r,org;

    cout<<"Enter A No :";
    cin>>a;
    org=a;
    
    
    
    while(a>0)
    {   b=a%10;
        r=r*10+b;
        a=a/10;
    }
        if(org==r)
        {
            cout<<"True";
         }
        else
        {
             cout<<"Flase";
         }
    
     
    
   
    return 0;
}
