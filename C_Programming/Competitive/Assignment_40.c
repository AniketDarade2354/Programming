// Program which accept area in square feet and convert it into square meter.
// (1 square feet = 0.0929 Square meter)
//
// Input: 5
// Output: 0.464515
//
// Input: 7
// Output: 0.650321

#include <stdio.h>

#define SQUAREMETER 0.0929

double SquareMeter(int iNo)
{
    double iAns = 0.0;

    if(iNo < 0)
    {
        return -1;
    }

    iAns = SQUAREMETER * iNo;

    return iAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    if(dRet == -1)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("Area in square meter : %lf\n", dRet);
    }

    return 0;
}

// Time Complexity : O(1)