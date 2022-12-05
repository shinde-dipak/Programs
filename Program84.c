// Problems on N Numbers

//optimize code.
//Accept N numbers from user and Display Reverse

#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[], int iSize)  //5
{
    int iCnt = 0;
    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }

}
int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

    printf("Enter the number of elements \n");  //1
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));//2

    printf("Enter the elements : \n");//3
    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Elements in Reverse order is :\n");
    
    DisplayReverse(ptr , iLength);//4
    
    free(ptr);//6
    
    return 0;
}