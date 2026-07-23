// Program which accept distance in kilometre and convert it into meter.
// (1 Kilometre = 1000 Meter)
//
// Input: 5
// Output: 5000
//
// Input: 12
// Output: 12000

#include <stdio.h>

#define METER 1000

int KMtoMeter(int iNo)
{
    int iAns = 0;

    iAns = METER * iNo;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d Km = %d Meter\n",iValue,iRet);
    return 0;
}

// Time Complexity : O(1)