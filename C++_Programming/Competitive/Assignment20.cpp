// Recursive program which accept number from user and return its product of digits.
//
// Input: 523
// Output: 30

#include <iostream>
using namespace std;

int Mult(int iNo)
{
    static int iMult = 1;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            iMult = iMult;
        }
        else
        {
            iMult = iMult * iDigit;
        }
        
        iNo = iNo / 10;

        Mult(iNo);
    }

    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iRet = Mult(iValue);

    cout << "Product of digits : " << iRet << endl;
    return 0;
}