// Problems based on Charecter Array or String

//Accept string from user and count number of white spaces.
//

#include<stdio.h>

int CountSpace(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str ==' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please Enter the String\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpace(Arr);

    printf("Number of white spaces are : %d\n",iRet);
    return 0;
}