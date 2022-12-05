//accept no from user and find factor of that number
//10 = 1,2,5.
//11 = 1.
//15 = 1,3,5.

//with optimisaation(reduce time complexcity)

//O(N/2) - order of N by 2.
#include<stdio.h>

void DisplayFactors(int iNo)
{
int iCnt = 0;

printf("Factors are :\n");

for(iCnt = 1 ; iCnt<= (iNo/2); iCnt++)
{
    if((iNo % iCnt) ==0)
    {
        printf("%d\n",iCnt); 
    }
}

}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}