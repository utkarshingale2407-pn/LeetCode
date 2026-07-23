//Typecasting
#include <iostream>
using namespace std;

int main() 
{
    int a=45;
    float b=45.55;
    
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of b is "<<float(b)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    int c=int(b);
    cout<<"'the expression is"<<a+b<<endl;
    cout<<"'the expression is"<<(int)a+b<<endl;
    cout<<"'the expression is"<<int(a+b)<<endl;
    
    
    
    return 0;
}