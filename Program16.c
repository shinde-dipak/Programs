// Demonstrate the Iteration by using for loop.

//  Static loop

#include<stdio.h>

void Display()
{
int iCnt = 0;
//      1           2       3
for(iCnt = 1 ; iCnt <= 5; iCnt++)
{
    //printf("Jay Ganesh...\n");  //4
    printf("%d :Jay Ganesh...\n",iCnt);
}
}
int main()
{
    Display();
    return 0;
}