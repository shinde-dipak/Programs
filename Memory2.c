#include<stdio.h>
#include<stdlib.h>

int main()
{
  int size = 0;
  int *Arr = NULL;

  printf("Enter the size of array\n");
  scanf("%d",&size);

  Arr = (int *)malloc(sizeof(int)* size);
  printf ("Size of p is :\n",sizeof (Arr));

  //use the memory"

  free(Arr); 

    return 0;  
}