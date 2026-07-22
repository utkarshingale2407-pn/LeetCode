//Input: nums = [2,7,11,15], target = 9
//Output: [0,1]
//Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

#include <stdio.h>

int main() 
{
   
    int i,n,a,b,t;

    printf("Enter array size \n");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter array elements \n");
    for(i=0;i<n;i++)
     {
          scanf("%d",&arr[i]);
      }
   
    printf("Enter Target Value ");
    scanf("%d",&t);

    for(a=0;a<n;a++)
    {
      for(b=a+1;b<n;b++)
     {
           if( arr[a] + arr[b] == t)
        {
           printf("Output = [%d , %d]",a,b);
           return 0;
         }
       
      }
    
    }
    printf("No Solution");
   
   
   
    return 0;
}
