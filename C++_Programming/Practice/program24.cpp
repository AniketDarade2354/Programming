#include <iostream>

class Base {
public:
    Base() { std::cout << "Base construtor \n"; }
    ~Base() { std::cout << "Base destroyed\n"; }
};

class Derived : public Base {
    int* data;
public:
    Derived() { data = new int[100];
                std::cout << "Dervied construtor\n"; }
    ~Derived() { delete[] data; std::cout << "Derived destroyed\n"; }
};

int main()
{
    Base* b = new Derived();
    delete b;
}
