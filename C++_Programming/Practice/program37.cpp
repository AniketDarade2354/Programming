#include <iostream>
using std::cout;

namespace Demo
{
    int no = 11;

    void fun()
    {
        cout << "Jay Ganesh...\n";
    }
} // namespace Demo

using Demo::fun;

int main()
{
    cout << "Jay Ganesh...\n";

    fun();      

    return 0;
}