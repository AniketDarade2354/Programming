// Generic program to accept N values and count frequency of any specific.
//
// Input: 10 20 30 10 30 40 10 40 10
// Value to check frequency: 10
// OutPut: 4

#include <iostream>
using namespace std;

template <class T>
T Frequency(T *Arr, int iSize, T iNo)
{
    int iCount = 0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(iNo == Arr[i])
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int Brr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = Frequency(Brr, 9, 10);

    cout << "Frequency of 10 : " <<  iRet << endl;

    return 0;
}
