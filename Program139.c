// Problems based on Charecter Array or String

//Accept string from user and find frequency.
// problem solve code.
// not using case sesitive
#include<stdio.h>

int Countch(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str == 'a')||(*str == 'A'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Please enter string\n");

    scanf("%[^'\n']s",Arr);

    iRet = Countch(Arr);

    printf("Frequency of a is : %d\n",iRet);


    return 0;
}