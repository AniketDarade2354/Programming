#include <iostream>

using namespace std;

int main()
{
    float fValue1 = 0.0f;   // To store first input
    float fValue2 = 0.0f;   // To store second input
    float fValue3 = 0.0f;   // To store the result

    cout << "Enter first number : \n";
    cin >> fValue1;

    cout << "Enter second number : \n";
    cin >> fValue2;

    fValue3 = fValue1 + fValue2;

    cout << "Addition is : " << fValue3 << "\n";

    return 0;
}