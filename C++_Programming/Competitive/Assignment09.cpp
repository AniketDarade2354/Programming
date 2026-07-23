// Generic program to accept N values and search last occurrence of any specific value.
//
// Input: 10 20 30 10 30 40 10 40 10
// Value to search: 40
// OutPut: 8

#include <iostream>
using namespace std;

template <class T>
T SearchLast(T *Arr, int iSize, T iNo)
{
    int i = 0;
    int iIndex = -1;

    for(i = 0; i < iSize; i++)
    {
        if(iNo == Arr[i])
        {
            iIndex = i+1;
        }
    }

    return iIndex;
}

int main()
{
    int Brr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = SearchLast(Brr, 9, 40);

    cout << "Last occurence of 40 : " <<  iRet << endl;

    return 0;
}
