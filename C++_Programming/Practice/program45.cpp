#include <iostream>
using namespace std;

class A { char c; int i; };
class B { int i; char c; };
class C { char a; int b; char c; };
class D { int b; char a; char c; char d; char e;};

int main()
{
    
    cout << sizeof(A) << endl; // 8 byte
    cout << sizeof(B) << endl; // 8 byte
    cout << sizeof(C) << endl; // 12 byte
    cout << sizeof(D) << endl; // 8 byte

    return 0;
}