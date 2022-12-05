// Problems on Digits
//accept no from user and check weather the number is Pallindrome or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0, iRev = 0;
    int iTemp = iNo;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10)+ iDigit;
        iNo = iNo / 10;
    }
    if(iRev == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if (bRet == true)
    {
        printf("%d is a Pallindrome number\n",iValue);
    }
    else
    {
       printf("%d is not a Pallindrome number\n",iValue); 
    }
    return 0;
}