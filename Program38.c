//Accept the number from user and create the table of that number

//Input = 5
//output = 5 10 15 20 25 30 35 40 45 50.
//5*1
//5*2
//5*3
//5*3
//5*4
//5*5
//5*6
//5*7
//5*8
//5*9
//5*10

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    //int iAns = 0;
    printf("Table of %d is :\n",iNo);
    printf("______________________\n");

    for(iCnt = 1; iCnt <=10; iCnt++)
    {
         //iAns = iNo * iCnt;
        printf("%d * %d = %d \n",iNo , iCnt, iNo * iCnt);
    }
    printf("______________________\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}