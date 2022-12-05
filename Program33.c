//accept no from user and find factor of that number
//and Display the Addition of that Factors.

//10 = 1,2,5.....1+2+5=7
//11 = 1.........1 = 1
//15 = 1,3,5.....1+3+5 =9

//with optimisaation(reduce time complexcity)

//O(N/2) - order of N by 2.
#include<stdio.h>

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

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);

    printf("Summation of Factors : \n%d",iRet);

    return 0;
}