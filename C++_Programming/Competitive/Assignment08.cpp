// Generic program to accept N values and search first occurrence of any specific value.
//
// Input: 10 20 30 10 30 40 10 40 10
// Value to search: 40
// OutPut: 6

#include <iostream>
using namespace std;

template <class T>
T SearchFirst(T *Arr, int iSize, T iNo)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(iNo == Arr[i])
        {
            break;
        }
    }

    return i+1;
}

int main()
{
    int Brr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = SearchFirst(Brr, 9, 40);

    cout << "First occurence of 40 : " <<  iRet << endl;

    return 0;
}
