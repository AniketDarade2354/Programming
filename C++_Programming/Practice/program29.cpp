#include <iostream>

int* createArray()  
{
    int* arr = new int[5]{1, 2, 3, 4, 5};
    return arr; 
}

int main()
{
    int *p = createArray();

    delete[] p;

    p[0] = 10;  // Undefinde Behaviour 
    // use - after - free

    std::cout << p[0] << std::endl;

    return 0;
}
