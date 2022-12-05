#include<stdio.h>

// Function Defination
void Fun()
{
    printf("Inside fun\n");
}


int main()
{
 
    Fun();     // Function call 

    void (*fptr)();

    fptr = Fun;

    fptr();


    return 0;
}


