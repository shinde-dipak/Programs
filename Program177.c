// Doubly Linked list

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;   //X-new line as doubly vs singly
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PNODE;

int main()
{

    return 0;
}