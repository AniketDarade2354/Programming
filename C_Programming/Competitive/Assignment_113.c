// Accept Character from user and check whether it is digit or not (0-9).
//
// Input: 7
// Output: True
//
// Input: d
// Output: False

#include <stdio.h>
#include <stdbool.h>

bool CheckDigit(char ch)
{
    bool bFlag = false;

    if(ch >= '0' && ch <= '9')
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

    bRet = CheckDigit(cValue);

    if(bRet == true)
    {
        printf("It is digit\n");
    }
    else
    {
        printf("It is not a digit\n");
    }

    return 0;
}