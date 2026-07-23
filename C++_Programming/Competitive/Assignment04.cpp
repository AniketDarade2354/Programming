// Generic program to accept N values from user and return largest values.

#include <iostream>
using namespace std;

template <class T>
T Max(T *Arr, int iSize)
{
    T Max;
    int i = 0;

    Max = Arr[i];

    for(i = 1; i < iSize; i++)
    {
        if(Max < Arr[i])
        {
            Max = Arr[i];
        }
    }

    return Max;
}

int main()
{
    int Brr[] = {10,20,30,40,50};
    float Crr[] = {10.0f,3.7f,9.8f,8.7f};

    int iSum = Max(Brr, 5);
    printf("%d\n",iSum);

    float fSum = Max(Crr, 4);
    printf("%f\n",fSum);

    return 0;
}
