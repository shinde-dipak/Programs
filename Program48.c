// Problems on Digits
//Accept no From User and count no of digits in that number

//infinite loop code 
//press control + c to break infinite loop on cmd

//Input : 751
//output : 3
//Input : 75
//output : 2
//Input : 7
//output : 1
//Input : 7511
//output : 4

#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    
    int iCnt = 0;
    while(iNo >= 0)//infinite loop
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCnt++;
    }
        return iCnt;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of Digits are : %d\n",iRet);
    
    return 0;
}
