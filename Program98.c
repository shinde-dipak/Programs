// Problems On Pattern Printing

//Accept the Number from user and print * that nos of times
//Input : 4
//Output : a    b   c   d
//time compexicty = N

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'a';
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo ; iCnt++,ch++)
    {
        printf("%c\t",ch);
        
    }
   
}
int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}