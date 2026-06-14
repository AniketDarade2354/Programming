// Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
// 
// Input:  N: 6
//         Elements: 85 66 3 80 93 88
// Output: 53 (234 - 181)

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    int iDiff = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt]; 
        }
    }

    iDiff = iSumEven - iSumOdd;

    return iDiff;
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

    iRet = Difference(iPtr, iLength);

    printf("Result is %d\n",iRet);

    free(iPtr);

    return 0;

}

// Time Complexity : O(N)
// Where N > 0