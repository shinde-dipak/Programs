// Problems based on Charecter Array or String

//Accept full Name from user and Display it.
// problem solve code.

#include<stdio.h>

int main()
{
    char Arr[30];

    printf("Please enter your full name\n");
    //scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s\n",Arr);

    return 0;
}