#include <iostream>
using namespace std;

class Demo
{
    public:
        int no;
        float marks;

        void fun()
        { 
            cout << "Jay Ganesh...\n"; 
        }
};

int main()
{
    Demo dobj;
    
    cout << sizeof(dobj) << endl; // 8 bytes

    return 0;
}