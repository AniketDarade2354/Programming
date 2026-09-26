#include <iostream>

struct A    // Padding
{
    char a; // 4 bytes
    int b;  // 4 bytes
    char c; // 4 bytes
};

struct B 
{
    int b;  // 4 bytes
    char a; // 1 bytes
    char c; // 1 bytes
    // 2 bytes padding
    // 1 + 1 + 2 = 4 bytes
};

struct C 
{
    char a; // 1 bytes
    char c; // 1 bytes
    // 2 bytes padding 
    // 1 + 1 + 2 = 4 bytes
    int b;  // 4 bytes
};


int main()
{
    std::cout << sizeof(A) << std::endl;
    
    std::cout << sizeof(B) << std::endl;

    std::cout << sizeof(C) << std::endl;

    return 0;
}
