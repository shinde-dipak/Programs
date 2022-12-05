// Data structure

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First , int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*First == NULL)      //If linked list is empty
    {
        *First = newn;
    }
    else                    //if linked list contains atleast one node
    {
        newn -> next = *First;
        *First = newn;
    }
}
void InsertLast(PPNODE First , int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    PNODE temp = *First;

    newn -> data = no;
    newn -> next = NULL;

     if(*First == NULL)      //If linked list is empty
    {
        *First = newn;
    }
    else                    //if linked list contains atleast one node
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from linked list are : \n");

    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First -> next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
   int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;

    if(*First ==NULL)
    {
        return;
    }
    else if((*First) -> next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        (*First) = (*First) -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = *First;
    if(*First ==NULL)
    {
        return;
    }
    else if((*First) -> next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        while((temp -> next -> next)!= NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp -> next = NULL;

    }
}

void InsertAtPos(PPNODE First, int no, int ipos)
{
    int NodeCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    NodeCnt = Count(*First);

    if((ipos < 1)||(ipos > (NodeCnt +1)))
    {
        printf("Invalid Position\n");
        return;
    }
    else if(ipos ==1)
    {
        InsertFirst(First , no);
    }
    else if(ipos == NodeCnt +1)
    {
        InsertLast(First , no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        temp = *First;
        
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head , 51);
    InsertFirst(&Head , 21);
    InsertFirst(&Head , 11);

    Display(Head);

    iRet = Count(Head);

    printf("Number of Nodes are : %d\n",iRet);

    InsertLast(&Head ,101);
    InsertLast(&Head , 111);

    Display(Head);

    iRet = Count(Head);

     printf("Number of Nodes are : %d\n",iRet);

     DeleteFirst(&Head);

     Display(Head);

    iRet = Count(Head);

    printf("Number of Nodes are : %d\n",iRet);

    DeleteLast(&Head);

    Display(Head);

    iRet = Count(Head);

    printf("Number of Nodes are : %d\n",iRet);

    return 0;
}



/*
    All function Call By Address
    InsertFirst()
    InsertLast()
    InsertAtPosition()

    DeleteFirst()
    DeleteLast()
    DeleteAtPosition()

    Display()
    Count()
*/