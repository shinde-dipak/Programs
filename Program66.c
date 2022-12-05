// Problems on Digits
//accept no from user and return largest digit from the number

#include<stdio.h>
#include<stdbool.h>

int MinDigit(int iNo)
{
    int iDigit = 0;
    int iMin = 9;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        
        iNo = iNo / 10;
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = MinDigit(iValue);

    printf("Smallest digit is : %d\n",iRet);


    return 0;
}