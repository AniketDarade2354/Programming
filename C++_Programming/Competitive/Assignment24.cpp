// Recursive program which accept number from user and return smallest digit.
//
// Input: 87983
// Output: 3

#include <iostream>
using namespace std;

int Min(int iNo)
{
    static int iDigit = iNo % 10;

    if(iNo != 0)
    {
        if(iDigit > (iNo % 10))
        {
            iDigit = iNo % 10;
        }
        

        iNo = iNo / 10;
        Min(iNo);
        
    }

    return iDigit;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iRet = Min(iValue);

    cout << "Smallest digit : " << iRet << endl;
    return 0;
}