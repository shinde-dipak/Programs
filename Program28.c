
//Addition of First five numbers
//1+2+3+4+5=??

#include<stdio.h>

int Summation()
{
    int iCnt = 0;
    int iSum = 0;
    //      1         2          3
    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        iSum = iSum + iCnt;   //4
    }
    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Summation();

    printf ("Addition of First five no is : %d\n",iRet);

    return 0;
}