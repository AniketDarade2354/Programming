// Recursive program which display below pattern.
// Output: 1 2 3 4 5

#include <iostream>
using namespace std;

void Display()
{
    static int i = 1;

    if( i <= 5)
    {
        cout << i << "\t";
        i++;
        Display();
    }
}

int main()
{
    Display();

    cout << endl;;
    return 0;
}