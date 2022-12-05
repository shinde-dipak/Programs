// Problems on Digits
//accept no from user and check weather the number is Pallindrome number or not

#include<stdio.h>
#include<stdbool.h>

int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10)+ iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

bool CheckPallindrome(int iData)
{
    int iReverse = 0;
    iReverse = Reverse(iData);
    return (iReverse == iData);
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