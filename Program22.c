// Demonstrate the Iteration by using for loop.

//  Dynamic loop

#include<stdio.h>

void Display(int iValue)
{
int iCnt = 0;

iCnt = 1;    //1
while(iCnt <= iValue)   //2
{
    printf("%d : Marvellous...\n",iCnt);  //4
    iCnt++;   //3
}
}
int main()
{
    int iNo = 0;
    printf("Enter the Iteration :");
    scanf("%d",&iNo);
    Display(iNo);
    return 0;
}