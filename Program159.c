// Problems based on Charecter Array or String

//Accept string from user and accept one another empty string from user and
//copy the data from one string to other string and covert the capital case to small string.

#include<stdio.h>

void strcpySmallX(char *src, char *dest)
{
    while(*src !='\0')
    {
        if((*src >= 'A')&&(*src <= 'Z'))
        {
            *dest = *src + 32;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Please Enter the String\n");
    scanf("%[^'\n']s",Arr);

    strcpySmallX(Arr,Brr);

    printf("Copied string is : %s\n",Brr);
    printf("Original string is : %s\n",Arr);

    
    return 0;
}