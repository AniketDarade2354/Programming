// Recursive program which accept number from user and return its reverse number.
//
// Input: 523
// Output: 325

#include <iostream>
using namespace std;

int Reverse(int iNo)
{
    static int iReverse = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        iReverse = iReverse * 10 + iDigit ;
        
        iNo = iNo / 10;

        Reverse(iNo);
    }

    return iReverse;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iRet = Reverse(iValue);

    cout << "Reverse number : " << iRet << endl;
    return 0;
}