// Accept N numbers from users and return frequency of 11 form it.
//
// Input:   N:  6
//          Elements: 85 66 3 15 93 88 
// Output:  0
//
// Input:   N:  6
//          Elements: 85 11 3 15 11 111 
// Output:  2

#include <stdio.h>
#include <stdlib.h>

int Check(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if( Arr[iCnt] == 11 )
        {
            iCount++;
        }
    }

    return iCount;
   
}

int main()
{
    int iLength = 0, iCnt = 0;
    int iRet = 0;
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

    iRet = Check(iPtr, iLength);

    printf("Count of 11 %d\n",iRet);

    free(iPtr);

    return 0;

}

// Time Complexity : O(N)
// Where N > 0