// Problems based on Charecter Array or String

//Accept string from user and convert capital to small letter and vice versa
//

#include<stdio.h>

char CharToggleX(char ch)
{
    if((ch >= 'A')&&(ch <= 'Z'))
    {
    return ch + 32;
    }
    else if((ch >= 'a')&&(ch <= 'z'))
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

    cRet = CharToggleX(cValue);

    printf("Toggle Character is : %c\n",cRet);

    return 0;
}