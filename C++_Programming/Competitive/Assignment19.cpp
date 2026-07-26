// Recursive program which accept number from user and return its factorial.
//
// Input: 5
// Output: 120

#include <iostream>
using namespace std;

int Fact(int iNo)
{
    static int iFact = 1;

    if(iNo != 1)
    {
        iFact = iFact * iNo;

        Fact(iNo-1);
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iRet = Fact(iValue);

    cout << "Factorial of " << iValue << " : " << iRet << endl;
    return 0;
}