// Problems on Digits
//accept number and return summation of numbers
//file with updater
//with short hand operator

#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo /= 10;
        
    }
    return iSum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Summation of Digits are : %d\n",iRet);
    
    return 0;
}
