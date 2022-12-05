
//find factorial of any number
// 2! = 1 * 2
//5! = 1 * 2 * 3 * 4 * 5

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    //      1         2          3
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;   //4
    }
    return iFact;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter the Value :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf ("Factorial of %d is : %d\n",iValue, iRet);

    return 0;
}