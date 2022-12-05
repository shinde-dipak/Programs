#include<stdio.h>

struct Demo
{
    int i;
    char ch;
    float f;
    char ch1;
    float d;

};

int main()
{

    struct Demo dobj;
    
printf("size of Structure Demo is : %d\n",sizeof(dobj));

    return 0;
}