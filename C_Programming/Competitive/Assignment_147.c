// First Occurrence Position

#include <stdio.h>
#include <stdbool.h>
#include "LinkedList.h"     // User-defined header with Singly Linear List function

int FirstOccur(PNODE head, int iNo)
{
    int iCount = 1;

    while (head != NULL)
    {
        if(head->data == iNo)
        {
            break;
        }
        iCount++;
        head = head->next;
    }

    return iCount;
}

int main()
{
    PNODE  head = NULL;
    int iRet = 0;
    int iValue = 0;
    // Functions from LinkedList.h

    InsertFirst(&head, 11);
    InsertFirst(&head, 122);
    InsertFirst(&head, 11);
    InsertFirst(&head, 100);
    InsertFirst(&head, 51);
    InsertFirst(&head, 20);
    InsertFirst(&head, 11);

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FirstOccur(head, iValue);

    Display(head);      // From LinkedList.h
    printf("First Occurrence of %d : %d\n", iValue, iRet);
    return 0;
}