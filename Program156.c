// Problems based on Charecter Array or String

//Accept string from user and accept one another empty string from user and
//copy the data from one string to other string.

#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*src !='\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = *src;
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Please Enter the String\n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);

    printf("Copied string is : %s\n",Brr);

    
    return 0;
}