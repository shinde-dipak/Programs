// Problems based on Charecter Array or String

//Accept string from user and find length.
// problem solve code.

#include<stdio.h>

int strlenX(char str[])
{
    int iCnt = 0, i = 0;

    while(str[i] != '\0')
    {
        iCnt++;
        i++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter your full name\n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("Number of Characters are %d\n",iRet);

    return 0;
}