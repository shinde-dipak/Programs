#include<stdio.h>

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iMult = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iNo1);

    printf("Enter Second Number : \n");
    scanf("%d",&iNo2);

    printf("First number is : %d\n",iNo1);
    printf("Second number is : %d\n",iNo2);

    iMult = iNo1 * iNo2;     // Business Logic

    printf("Multiplication of two Numbers is :%d\n",iMult);

    return 0;
}