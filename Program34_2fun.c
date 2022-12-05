// Check weather the number is perfect no or not.

// perfect number means addition of factors of that number is equal to that number.


//accept no from user and find factor of that number
//and Display the Addition of that Factors.

//10 = 1,2,5.....1+2+5=7
//11 = 1.........1 = 1
//15 = 1,3,5.....1+3+5 =9

//with optimisaation(reduce time complexcity)

//O(N/2) - order of N by 2.
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
int iCnt = 0;
int iSum = 0;

printf("Factors are :\n");

for(iCnt = 1 ; iCnt<= (iNo/2); iCnt++)
{
    if((iNo % iCnt) ==0)
    {
        printf("%d\n",iCnt); 
        iSum = iSum + iCnt;
    }
}
if (iSum == iNo)
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
    bool iRet = false;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = CheckPerfect(iValue);

    //printf("Summation of Factors : \n%d",iRet);
    if (iRet == true)
    {
        printf("The Number is Perfect\n");
    }
    else
    {
        printf("The Number is not perfect\n");
    }

    return 0;
}