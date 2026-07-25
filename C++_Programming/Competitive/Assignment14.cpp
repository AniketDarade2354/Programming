// Recursive program which display below pattern.
// Output: A B C D E F

#include <iostream>

void Display()
{
    static char ch = 'A';

    if(ch <= 'F')
    {
        printf("%c\t",ch);
        ch++;
        Display();
    }
}

int main()
{
    Display();

    printf("\n");
    return 0;
}