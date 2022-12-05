#include<stdio.h>

// Function Defination

void Fun()
{
    Printf("Inside Fun\n");

}

int main()
{

Fun();     //function call

void (*fptr)();

fptr = Fun;
fptr();
    return 0;
}
