// Problems on Digits
//accept no from user and return largest digit from the number

#include<stdio.h>
#include<stdbool.h>

int MaxDigit(int iNo)
{
    int iDigit = 0;
    int iMax = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCnt++;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        if(iMax == 9)
        {
            break;
        }
        iNo = iNo / 10;
    }
    printf("%d\n",iCnt);
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = MaxDigit(iValue);

    printf("Largest digit is : %d\n",iRet);


    return 0;
}