// Problems on N Numbers

// Accept the N Numbers from user and display summation of even and odd elements separately
// with dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>

void DisplaySummationEvenOdd(int Arr[],int iSize)
{
    int iCnt = 0, iEvenSum = 0,iOddSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) ==0 )
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else 
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    printf("Summation of Even elements are : %d\n",iEvenSum);
    printf("Summation of Odd elements are : %d\n",iOddSum);
}
int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    DisplaySummationEvenOdd(ptr,iLength);

    free(ptr);
    return 0;
}