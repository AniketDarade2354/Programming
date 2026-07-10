// Display Only Odd Elements

#include <stdio.h>
#include <stdbool.h>
#include "LinkedList.h"     // User-defined header with Singly Linear List function

void DisplayOdd(PNODE head)
{
    printf("Only Odd Elements from Linked List\n");
    while (head != NULL)
    {
        if(head->data % 2 != 0)
        {
            printf("| %d | - ",head->data);
        }

        head = head->next;
    }
    printf("\n");
}

int main()
{
    PNODE  head = NULL;
    // Functions from LinkedList.h

    InsertFirst(&head, 11);
    InsertFirst(&head, 122);
    InsertFirst(&head, 11);
    InsertFirst(&head, 100);
    InsertFirst(&head, 51);
    InsertFirst(&head, 20);
    InsertFirst(&head, 11);

    DisplayOdd(head);

    return 0;
}