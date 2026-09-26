#include <iostream>

struct A    // Padding
{
    char a;
    int b;
    char c;
};

int main()
{
    std::cout << sizeof(A) << std::endl;   

    return 0;
}
