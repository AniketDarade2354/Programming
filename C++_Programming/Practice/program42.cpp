#include <iostream>
using namespace std;

class Demo
{
    public:
        int no;         // Characteristics
        float marks;    // Characteristics

        void fun()      // Behaviour
        { 
            cout << "Inside fun\n"; 
        }
};

int main()
{
    Demo dobj;
    
    cout << sizeof(dobj) << endl; // 8 bytes

    return 0;
}