// Accept N numbers from users and accept one another number as NO, return frequency of NO form it.
//
// Input:   N:  6
//          N0: 66
//          Elements: 85 66 3 66 93 88 
// Output:  2
//
// Input:   N:  6
//          NO: 12
//          Elements: 85 11 3 15 11 111 
// Output:  0

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iSize,int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if( Arr[iCnt] == iNo )
        {
            iCount++;
        }
    }

    return iCount;
   
}

int main()
{
    int iLength = 0, iCnt = 0;
    int iRet = 0, iValue = 0;
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

    iRet = Frequency(iPtr, iLength, iValue);

    printf("Count of element %d\n",iRet);

    free(iPtr);

    return 0;

}

// Time Complexity : O(N)
// Where N > 0