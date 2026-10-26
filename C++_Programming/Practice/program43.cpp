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
    
    cout << dobj.no << endl; 

    dobj.fun();
    return 0;
}