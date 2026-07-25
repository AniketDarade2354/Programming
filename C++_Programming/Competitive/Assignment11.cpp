// Recursive program which display below pattern.
// Output: * * * * *

#include <iostream>

void Display()
{
    static int i = 1;

    if( i <= 5)
    {
        printf("*\t");
        i++;
        Display();
    }
}

int main()
{
    Display();

    printf("\n");
    return 0;
}