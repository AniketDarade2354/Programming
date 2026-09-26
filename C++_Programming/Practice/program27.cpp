#include <iostream>

int* createArray()  
{
    int arr[5] = {1, 2, 3, 4, 5};
    return arr; // error
}

int main()
{
    int *p = createArray();

    return 0;
}
