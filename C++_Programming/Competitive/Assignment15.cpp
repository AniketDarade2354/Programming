// Recursive program which display below pattern.
// Output: a b c d e f

#include <iostream>

void Display()
{
    static char ch = 'a';

    if(ch <= 'f')
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