// Problems On Pattern Printing

//Accept the Number from user and print * that nos of times
//Input : 4
//Output : 1    2   3   4   *   *   *   *

//time compexicty = 2N

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}