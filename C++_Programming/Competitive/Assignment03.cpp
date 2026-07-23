// Generic program to accept N values from user and return addition of that values.

#include <iostream>
using namespace std;

template <class T>
T AddN(T *Arr, int iSize)
{
    T Sum = 0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        Sum = Sum + Arr[i];
    }

    return Sum;
    
}

int main()
{
    int Brr[] = {10,20,30,40,50};
    float Crr[] = {10.0f,3.7f,9.8f,8.7f};

    int iSum = AddN(Brr, 5);
    printf("%d\n",iSum);

    float fSum = AddN(Crr, 4);
    printf("%f\n",fSum);

    return 0;
}
