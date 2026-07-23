// Program to find even factorial of given number.
//
// Input: 5
// Output: 8    (4 * 2)
//
// Input: -5
// Output: 8    (4 * 2)
//
// Input: 10
// Output: 3840 (10 * 8 * 6 * 4 * 2)


#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iMul = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMul = 1;
    for(iCnt = iNo;iCnt >= 2;iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iMul = iMul * iCnt;
        }
    }

    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n",iRet);
    
    return 0;
}

// Time Complexity : O(N)
// Where N > 0