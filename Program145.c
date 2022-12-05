// Problems based on Charecter Array or String

//Accept string from user as well as accept one charecter from user and find letter is present or not in the string
//by using flag
#include<stdio.h>
#include<stdbool.h>
bool Check(char *str, char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[10];
    bool bRet = false;
    char cValue = '\0';

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the charecter\n");
    scanf(" %c",&cValue);  // Problem solve line space before %c

    bRet = Check(Arr,cValue);
    if(bRet == true)
    {
    printf("Charecter is Present in the string\n");
    }
    else
    {
    printf("Charecter is not Present in the string\n");
    }

    return 0;
}