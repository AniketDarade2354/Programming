// Accept N numbers from users and return the difference between largest and smallest number.
//
// Input:   N:  6
//          Elements: 85 66 3 66 93 88 
// Output:  90  (93 - 3)

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = 0;
    int iMin = 0;
    int iDiff = 0;

    iMax = Arr[0];
    iMin = Arr[0];

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if( Arr[iCnt] > iMin)
        {
            iMax = Arr[iCnt];
        }
        else
        {
            iMax = Arr[iCnt];
        }
    }

    iDiff = iMax - iMin;

    return iDiff;
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *Brr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(sizeof(int) * iLength);

    if(Brr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iLength);
    
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Difference(Brr, iLength);

    printf("Difference is (Largest - Smallest) %d\n",iRet);
    
    free(Brr);

    return 0;

}

// Time Complexity : O(N)
// Where N > 0