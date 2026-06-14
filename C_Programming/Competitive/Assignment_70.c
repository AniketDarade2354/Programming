// Accept N numbers from users and return product of all odd elements.
//
// Input:   N:  6
//          Elements: 15 66 3 70 10 88 
// Output:  45
//
// Input:   N:  6
//          Elements: 44 66 72 70 10 88 
// Output:  0

#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iSize)
{
    int iCnt = 0;
    int iProductOdd = 1;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iProductOdd = iProductOdd * Arr[iCnt];
        }
    }

    return iProductOdd;
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *iPtr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(sizeof(int) * iLength);

    if(iPtr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iLength);
    
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Product(iPtr, iLength);

    if(iRet == 1)
    {
        iRet = 0;
        printf("Product of odd element %d\n",iRet);
    }
    else
    {
        printf("Product of odd element %d\n",iRet);
    }
    
    free(iPtr);

    return 0;

}

// Time Complexity : O(N)
// Where N > 0