// Problems On Pattern Printing

//Accept the Number from user and print * that nos of times
//Input : 4
//Output : *    *   *   *
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
   for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}