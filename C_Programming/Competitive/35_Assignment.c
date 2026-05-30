// Program which returns difference between Even factorial and odd factorial of given number.
//
// Input: 5
// Output: -7   (8 - 15)
//
// Input: -5
// Output: -7    (8 - 15)
//
// Input: 10
// Output: 2895 (3840 - 945)


#include <stdio.h>

int FactrialDiff(int iNo)
{
    int iCnt = 0;
    int iMul1 = 0;
    int iMul2 = 0;
    int iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMul1 = 1;
    for(iCnt = iNo;iCnt >= 2;iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iMul1 = iMul1 * iCnt;
        }
    }

    iMul2 = 1;
    for(iCnt = iNo;iCnt >= 2;iCnt--)
    {
        if((iCnt % 2) != 0)
        {
            iMul2 = iMul2 * iCnt;
        }
    }

    iAns = iMul1 - iMul2;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactrialDiff(iValue);

    printf("Factorial difference is %d\n",iRet);
    
    return 0;
}

// Time Complexity : O(2N)
// Where N > 0