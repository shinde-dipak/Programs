// Display the Even Factor of accepted Number

#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;
    printf("Even Factors of %d are :\n",iNo);
    for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
    {
        if (((iNo % iCnt)==0)&&((iCnt % 2)==0))
        {
            printf("%d",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}