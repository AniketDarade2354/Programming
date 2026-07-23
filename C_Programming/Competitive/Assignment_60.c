// Accept N numbers from user and display all such elements which are multiples of 11.
// 
// Input:  N: 6
//         Elements: 85 66 3 55 93 88
// Output: 66 55 88

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if( ( (Arr[iCnt] % 11) == 0))
        {
            printf("%d ",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iLength = 0, iCnt = 0;
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

    Display(iPtr, iLength);

    free(iPtr);

    return 0;

}

// Time Complexity : O(N)
// Where N > 0