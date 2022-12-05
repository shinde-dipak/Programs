// Problems based on Charecter Array or String

//

#include<stdio.h>

int main()
{
    int i = 0;
    printf("________________________________\n");
    printf("ASCII table\n");
    printf("________________________________\n");

    printf("Character\t Decimal\t Hex\t Octal\n");
    for(i=1; i<=127;i++)
    {
        printf("%c \t %d \t %x \t %o \n",i,i,i,i);
    }
    
    printf("_________________________________\n");

    
    return 0;
}