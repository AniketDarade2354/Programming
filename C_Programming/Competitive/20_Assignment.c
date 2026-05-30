// Program which accept number from user and return difference between summation of all its factors and non factors.
// 
// Input: 12
// Output: -34  (16 - 50)
// 
// Input: 10
// Output: -29  (8 - 37)

#include <stdio.h>

int FactorDifference(int iNo)
{
    int iCnt = 0;
    int iSumFactor = 0;
    int iSumNonFactor = 0;
    int iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Summation of factors
    for(iCnt = (iNo / 2);iCnt >= 1;iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
           iSumFactor = iSumFactor + iCnt; 
        }
    }

    // Summation of non factors
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSumNonFactor = iSumNonFactor + iCnt;
        }
        
    }

    // Difference between summation of factors and non factors.
    iAns = iSumFactor - iSumNonFactor;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorDifference(iValue);

    printf("Output: %d\n",iRet);
    
    return 0;
}

// Time Complexity : O(N)
// Where N > 0