
//Addition of First n  numbers
//1+2+3+4+5+...n = ??

#include<stdio.h>

int Summation(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    //      1         2          3
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;   //4
    }
    return iSum;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter the Value :\n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf ("Addition of First n nos is : %d\n",iRet);

    return 0;
}