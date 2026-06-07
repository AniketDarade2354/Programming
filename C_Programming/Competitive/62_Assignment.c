// Accept N numbers from users and return difference between frequency of even number and odd numbers.
//
// Input:   N:  7
//          Elements: 85 66 3 80 93 88 90
// Output:  1   (4 - 3)

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCountEven = 0;
    int iCountOdd = 0;
    int iFrequency = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if( ( (Arr[iCnt] % 2) == 0))
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }

        iFrequency = iCountEven - iCountOdd;
    }

    return iFrequency;
   
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

    iRet = Frequency(iPtr, iLength);

    printf("Result is %d\n",iRet);

    free(iPtr);

    return 0;

}

// Time Complexity : O(N)
// Where N > 0