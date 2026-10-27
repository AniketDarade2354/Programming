#include <iostream>

using namespace std;

class A {public: int i; char a; char b;};

int main()
{
    A arr[3];

    cout << "stride between " << &arr[1]<< " " << &arr[0]  <<" elements = " << (&arr[1] - &arr[0]) <<"\n"; 

    cout << sizeof(A) << endl; // 8 byte

    return 0;
}