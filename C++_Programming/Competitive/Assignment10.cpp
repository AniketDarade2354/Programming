// Generic program to accept N values and reverse the contents.
//
// Input: 10 20 30 10 30 40 10 40 10
// OutPut: 10 40 10 40 30 10 30 20 10

#include <iostream>
using namespace std;

template <class T>
void Reverse(T *Arr, int iSize)
{
    int i = 0;

    for(i = iSize-1; i >= 0; i--)
    {
        cout << Arr[i] << "\t";
    }
    cout << endl;

}

int main()
{
    int Brr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int i = 0;

    for(i = 0; i < 9; i++)
    {
        cout << Brr[i] << "\t";
    }
    cout << endl;
    
    Reverse(Brr, 9);

    return 0;
}
