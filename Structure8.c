#include<stdio.h>

struct Demo
{
    int i;
    char ch;
    float f;
    char ch1;
    float d;

};

union Hello
{
    int i;
    float f;
    double d;

};



int main()
{

    struct Demo dobj;
    union Hello hobj;  
printf("size of Structure Demo is : %d\n",sizeof(dobj));
printf("size of union : %d\n",sizeof(hobj));
    return 0;
}