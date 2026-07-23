// Accept N numbers from users and accept one another number as NO, check whether NO is present or not.
//
// Input:   N:  6
//          N0: 66
//          Elements: 85 66 3 66 93 88 
// Output:  TRUE
//
// Input:   N:  6
//          NO: 12
//          Elements: 85 11 3 15 11 111 
// Output:  FALSE

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iSize,int iNo)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if( Arr[iCnt] == iNo )
        {
            bFlag = TRUE;
            break;
        }
    }

    return bFlag;
   
}

int main()
{
    int iLength = 0, iValue = 0, iCnt = 0;
    BOOL bRet = FALSE;
    int *iPtr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter the number : ");
    scanf("%d",&iValue);

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

    bRet = Check(iPtr, iLength, iValue);

    if(bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(iPtr);

    return 0;

}

// Time Complexity : O(N)
// Where N > 0