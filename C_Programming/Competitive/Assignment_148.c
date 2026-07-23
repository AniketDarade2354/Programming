// Last Occurrence Position

#include <stdio.h>
#include <stdbool.h>
#include "LinkedList.h"     // User-defined header with Singly Linear List function

int LastOccur(PNODE head, int iNo)
{
    int iCount = 1;
    int iLastOccur = 0;

    while (head != NULL)
    {
        if(head->data == iNo)
        {
            iLastOccur = iCount;    
        }
        iCount++;
        head = head->next;
    }

    return iLastOccur;
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

    iRet = LastOccur(head, iValue);

    Display(head);      // From LinkedList.h
    printf("Last Occurrence of %d : %d\n", iValue, iRet);
    return 0;
}