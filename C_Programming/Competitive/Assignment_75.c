// Accept N numbers from users and display summation of digits of each number.
//
// Input:   N:  6
//          Elements: 8225 665 3 76 953 858 
// Output:  17 17 3 13 17 21

#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;
    int iDigit = 0;
    int iSum = 0;
    int iNo = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        iSum = 0;
        iNo = Arr[iCnt];
        while (iNo > 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("%d ",iSum);
        
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