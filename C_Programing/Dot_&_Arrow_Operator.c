
#include <stdio.h>

int main() 
{
    struct student
    {
        char name[25];
        int age;
    };
    
    struct student anil = {"Anil",30};
    
    struct student *ptr = &anil;
   
    
   
    anil.age = 50;
    ptr->age = 200;
    printf("Name = %s \n",anil.name);
    printf("Age = %d \n",ptr->age);

    return 0;
}