// Program which accept number from user and display its multiplication of factors.
//
// Input: 12
// Output: 144  (1 * 2 * 3 * 4 * 6)
//
// Input: 13
// Output: 1    (1)
//
// Input: 10
// Output: 10   (1 * 2 * 5)

#include <stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMult = 1;
    for(iCnt = 1;iCnt <= (iNo / 2);iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt; 
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Output: %d\n",iRet);

    return 0;
}

// Time Complexity : O(N/2)
// Where N > 0