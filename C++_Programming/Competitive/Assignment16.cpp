// Recursive program which display below pattern.
// Input: 5
// Output: 5 * 4 * 3 * 2 * 1 *

#include <iostream>
using namespace std;

void Display(int iNo)
{
   if(iNo != 0)
    {
        cout << iNo << " * ";
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    Display(iValue);

    cout << endl;
    return 0;
}