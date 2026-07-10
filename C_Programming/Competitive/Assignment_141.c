// Search an element

#include <stdio.h>
#include <stdbool.h>
#include "LinkedList.h"     // User-defined header with Singly Linear List function

bool Search(PNODE head, int iNo)
{
    bool bFlag = false;

    if(head == NULL)
    {
        printf("Linked List is empty\n");
        return bFlag;
    }

    while (head != NULL)
    {
        if(head->data == iNo)
        {
            bFlag = true;
            break;
        }
        head = head->next;
    }

    return bFlag;
    
}

int main()
{
    PNODE  head = NULL;
    bool bRet = false;
    int iValue = 0;

    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    printf("Enter number to search : \n");
    scanf("%d",&iValue);

    bRet = Search(head, iValue);
    
    if(bRet == true)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }
    
    return 0;
}