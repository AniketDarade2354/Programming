// Accept Character from user and check whether it is small case or not (a-z).
//
// Input: g
// Output: True
//
// Input: D
// Output: False

#include <stdio.h>
#include <stdbool.h>

bool CheckSmallAlphabet(char ch)
{
    bool bFlag = false;

    if(ch >= 'a' && ch <= 'z')
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

    bRet = CheckSmallAlphabet(cValue);

    if(bRet == true)
    {
        printf("It is small case character\n");
    }
    else
    {
        printf("It is not a small case character\n");
    }

    return 0;
}