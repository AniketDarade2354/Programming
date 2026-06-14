// Accept amount in US dollar and return its corresponding value in Indian currency.
//Consider 1$ as 70 rupees.
//
// Input: 10
// Output: 700
//
// Input: 3
// Output: 210

#include <stdio.h>

#define INR 70

int DollarToInr(int iNo)
{
    int iAns = 0;

    if(iNo < 0)
    {
        return -1;
    }

    iAns = INR * iNo;

    return iAns;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToInr(iValue);

    if(iRet == -1)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("Value in INR is %d\n",iRet);
    }
    
    return 0;
}

// Time Complexity : O(1)