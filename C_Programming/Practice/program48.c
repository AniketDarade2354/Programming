#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

int IsEmpty(struct node * first)
{
    if(first == NULL)
    {
        printf("Stack is empty\n");
        return 1;
    }

    return 0;
}

void Display(struct node * first)
{
    if(IsEmpty(first))
    {
        return;
    }

    printf("|");
    while (first != NULL)
    {
        printf(" %d |", first->data);
        first = first->next;
    }
    printf("\n");
}

int Count(struct node * first)
{
    int iCount = 0;

    while (first != NULL)
    {
        iCount++;
        first = first->next;
    }
    
    return iCount;
}

void Push(struct node ** first, int iNo)
{
    struct node * newn = NULL;
    
    newn = (struct node *)malloc(sizeof(struct node));

    newn->data = iNo;
    newn->next = NULL;
    
    if(*first == NULL)      // Stack is empty
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;   
    }
}

void Pop(struct node ** first)
{
    struct node * temp = NULL;

    if(*first == NULL)
    {
        IsEmpty(*first);
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        *first = (*first)->next;
        free(temp);
    }
}

int Peek(struct node * first)
{
    if(first == NULL)
    {
        IsEmpty(first);
    }
    else
    {
        return first->data;
    }
}



int main()
{
    struct node * top = NULL;
    int iRet = 0;

    Display(top);

    Push(&top, 121);
    Push(&top, 111);
    Push(&top, 101);
    Push(&top, 51);
    Push(&top, 21);
    Push(&top, 11);
    
    Display(top);
    iRet = Count(top);
    printf("Number of nodes are : %d\n",iRet);

    iRet = Peek(top);
    printf("Top element in stack : %d\n", iRet);

    Pop(&top);
    Pop(&top);

    Display(top);
    iRet = Count(top);
    printf("Number of nodes are : %d\n",iRet);

    iRet = Peek(top);
    printf("Top element in stack : %d\n", iRet);

    return 0;
}