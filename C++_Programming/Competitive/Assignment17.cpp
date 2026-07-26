// Recursive program which accept number from user and return summation of its digits.
//
// Input: 879
// Output: 24

#include <iostream>
using namespace std;

int Sum(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        iSum = iSum + iDigit;

        iNo = iNo / 10;

        Sum(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iRet = Sum(iValue);

    cout << "Summation of its digits : " << iRet << endl;
    return 0;
}