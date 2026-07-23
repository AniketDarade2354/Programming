#include <iostream>

using namespace std;

/*
    Algorithm

    START
        Accept first number as No1
        Accept second number as No2
        Perform addition of No1 & No2
        Display the result
    STOP
*/

int main()
{
    float i, j, k;

    cout << "Enter first number : \n";
    cin >> i;

    cout << "Enter second number : \n";
    cin >> j;

    k = i + j;

    cout << "Addition is : " << k << "\n";

    return 0;
}