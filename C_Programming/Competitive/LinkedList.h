#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    while(first != NULL)    // Type 1 
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)    // Type 1
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(NULL == *first)  // LL is emmmpty
    {
        *first = newn;
    }
    else                // LL contains atleast one node
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)  // LL is emmmpty
    {
        *first = newn;
    }
    else                // LL contains atleast one node
    { 
            temp = *first;

            while (temp->next != NULL)  // Type 2
            {
                temp = temp -> next;
            }

            temp->next = newn;      
    }
}

void InsertAtPos(PPNODE first, int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int iCnt = 0;
    int iCount = 0;

    iCount = Count(*first);

    // Filter

    if((iPos < 1) || (iPos > iCount+1))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(first, iNo);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(first, iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        
        newn->data = iNo;
        newn->next = NULL;

        temp = *first;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    temp = *first;

    if(*first == NULL)              // LL is empty
    {
        return;
    }
    else if((*first)->next == NULL)   // LL constains one node
    {
        free(*first);
        *first = NULL;
    }
    else                            // LL constains two or more nodes
    {
        temp = *first;

        *first = (*first)->next;

        free(temp);
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)              // LL is empty
    {
        return;
    }
    else if((*first)->next == NULL)   // LL constains one node
    {
        free(*first);
        *first = NULL;
    }
    else                            // LL constains two or more nodes
    {
        temp = *first;

        while (temp->next->next != NULL)    // Type 3
        {
            temp = temp -> next;
        }

        free(temp->next);

        temp->next = NULL;
    }
}

void DeleteAtPos(PPNODE first, int iPos)
{
    int iCnt = 0;
    int iCount = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

    iCount = Count(*first);

    if((iPos < 1) || (iPos > iCount))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(first);
    }
    else if(iPos == iCount)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp -> next;
        }

        target = temp->next;

        temp->next = target->next;

        free(target);
    }
}