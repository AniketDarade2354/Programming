// Generic program to accept N values from user and return smallest values.

#include <iostream>
using namespace std;

template <class T>
T Min(T *Arr, int iSize)
{
    T Min;
    int i = 0;

    Min = Arr[i];

    for(i = 1; i < iSize; i++)
    {
        if(Min > Arr[i])
        {
            Min = Arr[i];
        }
    }

    return Min;
}

int main()
{
    int Brr[] = {10,20,30,40,50};
    float Crr[] = {10.0f,3.7f,9.8f,8.7f};

    int iRet = Min(Brr, 5);
    printf("%d\n",iRet);

    float fRet = Min(Crr, 4);
    printf("%f\n",fRet);

    return 0;
}
