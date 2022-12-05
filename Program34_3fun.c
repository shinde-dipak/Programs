//Check weather the number is perfect number or not

//better code for interview

//Perfect number means addition of factors of that number is equal to that numbet
//e.g. 6=1+2+3
//28
//496
//8128

//accept no from user and find factor of that number
//and Display the Addition of that Factors.

//10 = 1,2,5.....1+2+5=7
//11 = 1.........1 = 1
//15 = 1,3,5.....1+3+5 =9

//with optimisaation(reduce time complexcity)

//O(N/2) - order of N by 2.
#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
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
    return iSum;
}

bool CheckPerfect(int iData)
{
    int iAns = 0;

    iAns = SumFactors(iData);

    if(iAns == iData)
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

    bRet = CheckPerfect(iValue);
    
    if(bRet == true)
    {
        printf("%d is is Perfect Number\n",iValue);
    }
    else
    {
        printf("%d is not a Pefect Number\n",iValue);
    }
    return 0;
}