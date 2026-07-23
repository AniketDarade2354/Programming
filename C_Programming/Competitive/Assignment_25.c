// Program which accept N and print 5 multiples of N.
//
// Input: 4
// Output: 4 8 12 16 20

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMultiple = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= 5;iCnt++)
    {
        iMultiple = iCnt * iNo;
        printf("%d ", iMultiple);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}

// Time Complexity : O(N)
// Where N = 5