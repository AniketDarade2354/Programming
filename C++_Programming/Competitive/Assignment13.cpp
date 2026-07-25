// Recursive program which display below pattern.
// Output: 5 4 3 2 1

#include <iostream>


void Display()
{
    static int i = 5;

    if( i >= 1)
    {
        std::cout << i << "\t";
        i--;
        Display();
    }
}

int main()
{
    Display();

    std::cout << std::endl;
    return 0;
}