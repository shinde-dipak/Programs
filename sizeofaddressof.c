#include<stdio.h>

int main()
{
 char ch = 'A';
 int i = 11;
 float f = 3.14;
 double d = 9.567;
 
 printf("%c\n",ch);
 printf("%d\n",i);
 printf("%f\n",f);
 printf("%lf\n",d);   
 
 printf("size of each variable\n");
 printf("size of character : %d\n",sizeof(ch));
 printf("size of interger : %d\n",sizeof(i));
 printf("size of float : %d\n",sizeof(f));
 printf("size of double : %d\n",sizeof(d));
    
    printf("Address of each variable\n");
    printf("Address of ch : %d\n",&ch);
    printf("Address of i : %d\n",&i);
    printf("Address of f : %d\n",&f);
    printf("Address of d : %d\n",&d);
       
    return 0;
}