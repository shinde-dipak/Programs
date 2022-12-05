// Problems on N Numbers

// Accept the N Numbers from user and return the Average of that N numbers
// with dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>    //for Dynamic memory allocation

//float Average(int *Arr,int iSize)
float Average(int Arr[],int iSize)
{
    int iSum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iSize ;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return (iSum / iSize);
}
int main()
{
    int *ptr = NULL;
    int iLength = 0 , i = 0;
    float fRet = 0.0f;

    printf("Enter the numberof elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Please Enter the Numbers : \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    fRet = Average(ptr, iLength);

    printf("Average is : %f\n",fRet);

    free(ptr);
    
    return 0;
}