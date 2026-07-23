// Accept N numbers from users check whether that numbers contains 11 in it or not.
//
// Input:   N:  6
//          Elements: 85 66 11 80 93 88 
// Output:  11 is present
//
// Input:   N:  6
//          Elements: 85 66 3 80 93 88 
// Output:  11 is not present

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iSize)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if( Arr[iCnt] == 11 )
        {
            bFlag = TRUE;
            break;
        }
    }

    return bFlag;
   
}

int main()
{
    int iLength = 0, iCnt = 0;
    BOOL bRet = FALSE;
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

    bRet = Check(iPtr, iLength);

    if(bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }

    free(iPtr);

    return 0;

}

// Time Complexity : O(N)
// Where N > 0