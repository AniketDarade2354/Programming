// Accept Character from user and check whether it is alphabet or not (A-Z, a-z).
//
// Input: F
// Output: True
//
// Input: &
// Output: False

#include <stdio.h>
#include <stdbool.h>

bool CheckAlphabet(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = CheckAlphabet(cValue);

    if(bRet == true)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not a Character\n");
    }

    return 0;
}