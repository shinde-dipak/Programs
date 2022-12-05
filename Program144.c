// Problems based on Charecter Array or String

//Accept string from user as well as accept one charecter from user and find frequency of that letters
//user accepted value
#include<stdio.h>

int CountFrequency(char *str, char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the charecter\n");
    scanf(" %c",&cValue);  // Problem solve line space before %c

    iRet = CountFrequency(Arr,cValue);

    printf("Frequency of letters is : %d\n",iRet);


    return 0;
}