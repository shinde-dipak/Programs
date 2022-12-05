#include<stdio.h>

int main()
{
  int size = 0;
  int *p = NULL;

  printf("Enter the size\n");
  scanf("%d",&size);

  p = (int *)malloc (sizeof(int)* size);
  p = (int *)calloc (sizeof(int), size);

    return 0;  
}