// Program which accept number from user and display its table in reverse.
//
// Input: 5
// Output: 50 45 40 35 30 25 20 15 10 5
//
// Input: -5
// Output: 50 45 40 35 30 25 20 15 10 5 

#include <stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iTable = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10;iCnt >= 1;iCnt--)
    {
        iTable = iNo * iCnt;
        printf("%d ",iTable);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    TableRev(iValue);
    return 0;
}

// Time Complexity : O(N)
// Where N = 10