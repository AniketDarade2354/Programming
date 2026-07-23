// Accept Character from user and check whether it is capital or not (A-Z).
//
// Input: F
// Output: True
//
// Input: d
// Output: False

#include <stdio.h>
#include <stdbool.h>

bool CheckCapitalAlphabet(char ch)
{
    bool bFlag = false;

    if(ch >= 'A' && ch <= 'Z')
    {
        bFlag = true;
    }
    else
    {
        bFlag =  false;
    }

    return bFlag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = CheckCapitalAlphabet(cValue);

    if(bRet == true)
    {
        printf("It is Capital Character\n");
    }
    else
    {
        printf("It is not a Capital Character\n");
    }

    return 0;
}