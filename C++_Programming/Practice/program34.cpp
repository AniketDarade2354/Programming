#include <iostream>

namespace Demo
{
    int no = 11;

    void fun()
    {
        std::cout << "Jay Ganesh...\n";
    }
} // namespace Demo


int main()
{
    std::cout << "Jay Ganesh...\n";

    fun();      // Error

    return 0;
}