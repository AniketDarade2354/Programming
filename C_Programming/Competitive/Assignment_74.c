// Accept N numbers from users and display all such numbers which contains 3 digits in it.
//
// Input:   N:  6
//          Elements: 8225 665 3 76 953 858 
// Output:  665 953 858

#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;
    int iDigit = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] > 99 && Arr[iCnt] < 1000)
        {
            printf("%d ",Arr[iCnt]);
        }
    }
    printf("\n");

}

int main()
{
    int iLength = 0, iCnt = 0;
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

    Digits(Brr, iLength);

    free(Brr);

    return 0;

}

// Time Complexity : O(N)
// Where N > 0