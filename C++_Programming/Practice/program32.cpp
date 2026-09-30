#include <iostream>
#include <memory>

int main()
{
    auto a = std::make_shared<int>(5);

    auto b = a;

    std::cout << *a << std::endl;
    std::cout << *b << std::endl;
    
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    return 0;
}
