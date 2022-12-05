#include<stdio.h>

enum days {Monday, Tuesday, Wednesday,thursday};

int main()
{
enum days obj;
printf("size of Enumeration is : %d\n",sizeof(obj));
printf("Monday : %d\n",Monday);
printf("Tuesday : %d\n",Tuesday);
printf("Wednesday : %d\n",Wednesday);
printf("Thursday : %d\n",Thursday);
    return 0;
}