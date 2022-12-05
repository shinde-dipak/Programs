// Problems based on Charecter Array or String

//Accept string from user and convert capital to small letter and vice versa
//

#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = *str + 32;    
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Please Enter the String\n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("String after conversion is : %s\n",Arr);


    return 0;
}