// Problems based on Charecter Array or String

//Accept string from user and convert capital to small letter and vice versa
//

#include<stdio.h>

char ToUpperX(char ch)
{
    if((ch >= 'a')&&(ch <= 'z'))
    {
    return ch - 32;
    }
    else
    {
        return ch;
    }
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    cRet = ToUpperX(cValue);

    printf("Character in the upper case is : %c\n",cRet);

    return 0;
}