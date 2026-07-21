#include<stdio.h>

float div(float c , float b);
int main()
{
    int n;
    int x;
    printf("enter no ");
    scanf("%d",&n);

    printf("enter no of digits ");
    scanf("%d",&x);

    int i;
    int a;
    int b = 0;
    int c = 1;
    printf("Reversed No = ");
    for(i=0 ; i<x ; i++)
       {
        a=n%10;
        n = n / 10;
        b = b + a;
        c = c * a;
 
        printf("%d",a);
       }
              
        printf("\n Sum = %d \n ",b);
        printf("Product = %d \n ",c);
         div (c , b);
        

}        
        float div(float c , float b)
        {
           float z; 
            z = c / b;
            printf("Div of Prod Upon Sum = %.2lf ", z);
        return z;
            
        }