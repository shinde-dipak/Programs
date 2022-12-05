// Problems on N Numbers

// Accept the N Numbers from user and display even and odd count 
// with dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOddCount(int Arr[],int iSize)
{
    int iCnt = 0, iEvenCnt = 0,iOddCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) ==0 )
        {
            iEvenCnt++;
        }
        else 
        {
            iOddCnt++;
        }
    }
    printf("Number of Even elements are : %d\n",iEvenCnt);
    printf("Number of Odd elements are : %d\n",iOddCnt);
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

    DisplayEvenOddCount(ptr,iLength);

    free(ptr);
    return 0;
}