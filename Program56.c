// Problems on Digits
//accept no from user and count even and odd digit of that number and display it

#include<stdio.h>

void DisplayEvenOddDigits(int iNo)
{
    int iDigit = 0 , iEvenCnt = 0 , iOddCnt = 0;
    
    if(iNo == 0)
    {
        printf("Number of Even Digits are : 1\n");
        printf("Number of Odd Digits are :0\n");
        return;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
       if((iDigit % 2)==0)
       {
        iEvenCnt++;
       }
       else
       {
        iOddCnt++;
       }
        iNo = iNo / 10;
    }
    printf("Number of Even Digits are : %d\n",iEvenCnt);
    printf("Number of Odd Digits are : %d\n",iOddCnt);
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    DisplayEvenOddDigits(iValue);   
    return 0;
}
