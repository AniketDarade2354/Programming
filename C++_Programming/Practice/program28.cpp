#include <iostream>

int* createArray()  
{
    int* arr = new int[5]{1, 2, 3, 4, 5};
    return arr; // Error solved
}

int main()
{
    int *p = createArray();

    delete[] p;

    return 0;
}
