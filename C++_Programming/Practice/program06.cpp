#include <iostream>

float AddTwoNumbers(float fNo1, float fNo2)
{
    float fAns = 0.0f;

    fAns = fNo1 + fNo2;

    return fAns;
}

int main()
{
    float fValue1 = 0.0f;   // To store first input
    float fValue2 = 0.0f;   // To store second input
    float fResult = 0.0f;   // To store the result

    std::cout << "Enter first number : \n";
    std::cin >> fValue1;

    std::cout << "Enter second number : \n";
    std::cin >> fValue2;

    fResult = AddTwoNumbers(fValue1, fValue2);  // Perform the addition

    std::cout << "Addition is : " << fResult << "\n";

    return 0;
}