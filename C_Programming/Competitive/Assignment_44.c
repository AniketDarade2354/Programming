// Program which accept number from user and return multiplication of all digits.
//
// Input: 2395
// Output: 270
//
// Input: 1018
// Output: 8
//
// Input: 9440
// Output: 144
//
// Input: 922432
// Output: 864

#include <stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMul = 1;
    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            iMul;
        }
        else
        {
            iMul = iMul * iDigit;
        }
        
        iNo = iNo / 10;
    }

    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("%d\n",iRet);

    return 0;
}

// Time Complexity : O(log N)
// Where N > 0