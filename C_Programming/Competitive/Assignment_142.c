// Count Even Numbers

#include <stdio.h>
#include <stdbool.h>
#include "LinkedList.h"     // User-defined header with Singly Linear List function

int CountEven(PNODE head)
{
    int iCount = 0;

    while (head != NULL)
    {
        if(head->data % 2 == 0)
        {
            iCount++;
        }

        head = head->next;
    }

    return iCount;
}

int main()
{
    PNODE  head = NULL;
    int iRet = 0;


    InsertFirst(&head, 122);
    InsertFirst(&head, 111);
    InsertFirst(&head, 100);
    InsertFirst(&head, 51);
    InsertFirst(&head, 20);
    InsertFirst(&head, 11);

    iRet = CountEven(head);

    printf("Count of even numbers are : %d\n",iRet);
    return 0;
}