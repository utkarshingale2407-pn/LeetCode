//Input: nums = [1,2,1]
//Output: [1,2,1,1,2,1]
//Explanation: The array ans is formed as follows:
//- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
//- ans = [1,2,1,1,2,1]

#include <stdio.h>

int main() 
{
   
    int i,n,a,b;

    printf("Enter array size \n");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter array elements \n");
    for(i=0;i<n;i++)
     {
          scanf("%d",&arr[i]);
      }
     printf("[");
     for(i=0;i<n;i++)
     {
          printf(" %d ,",arr[i]);
      }
      for(i=0;i<n;i++)
     {
         if(i==n-1)
          printf(" %d ",arr[i]);
          else
          printf(" %d ,",arr[i]);
      }
   
   printf("]");
   
    return 0;
}
