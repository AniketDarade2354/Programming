///////////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////////

#include <iostream>

///////////////////////////////////////////////////////////////
//
//  Function name : AddTwoNumbers
//  Input :         float, float
//  Output :        float
//  Description :   Performs addition of two floats
//  Date :          08/05/2026
//  Author :        Aniket Utreshwar Darade
//
///////////////////////////////////////////////////////////////

float AddTwoNumbers(    
                        float fNo1,     // First

                        float fNo2      // Second
                    )
{
    float fAns = 0.0f;                  // Variable to store result

    fAns = fNo1 + fNo2;                 // Perform addition

    return fAns;
}

///////////////////////////////////////////////////////////////
//  
//  Application to perform Addition of 2 floats values
//
///////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f;   // To store first input
    float fValue2 = 0.0f;   // To store second input
    float fResult = 0.0f;   // To store the result

    std::cout << "Enter first number : \n";
    std::cin >> fValue1;

    std::cout << "Enter second number : \n";
    std::cin >> fValue2;

    fResult = AddTwoNumbers(fValue1, fValue2);  

    std::cout << "Addition is : " << fResult << "\n";

    return 0;
}

///////////////////////////////////////////////////////////////
//
//  Input :     10.0    11.0
//  Output :    21.0
//
///////////////////////////////////////////////////////////////