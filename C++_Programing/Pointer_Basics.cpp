#include <iostream>
using namespace std;

int main() 
{
    //  &  =Address of operator
    //  *  =(Value of )Dereference operator
    
    int a=3;
    int* b=&a;
    
    cout<<"The Address Of a is : "<<&a<<endl;
    cout<<"The Address Of a is : "<<b<<endl;
    cout<<"The Value at Address Of b is : "<<*b<<endl;
   
   //Pointer to Pointer 
    int** c=&b;
    cout<<"The Address Of b is : "<<&b<<endl;
    cout<<"The Address Of b is : "<<c<<endl;
    cout<<"The Value at c is : "<<*c<<endl;
    cout<<"The Value at address value at(value at(value at (c)) : "<<**c;
    return 0;
}