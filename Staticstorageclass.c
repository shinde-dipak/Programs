#include<stdio.h>

void Demo()
{
 auto int A = 10;
 A++;
 printf("Value from Demo is:%d\n",A);
}

void Hello()
{
static int A = 10;
A++;
printf("Value from Hello is : %d\n",A);
}

int main()

{

  Demo();

  Demo();

  Hello();
  Hello();
  Demo();
  Hello();

return 0;


}