#include <iostream>
#include <cstddef>

using namespace std;

class A {public: int i; char a; char b;};

int main()
{
    cout << offsetof(A, i) << "\n"; // 0
    cout << offsetof(A, a) << "\n"; // 4
    cout << offsetof(A, b) << "\n"; // 5

    cout << sizeof(A) << endl; // 8 byte

    return 0;
}