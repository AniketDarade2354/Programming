#include <iostream>
using namespace std;

namespace Demo
{
    int no = 11;

    void fun()
    {
        cout << "Jay Ganesh...\n";
    }
} // namespace Demo

namespace Demo1
{
    int no = 10;

    void fun()
    {
        cout << "Jay Ganesh...\n";
    }
}

using namespace Demo;
using namespace Demo1;

int main()
{
    cout << no;      

    fun();

    return 0;
}