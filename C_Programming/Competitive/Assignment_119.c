// Accept character from user and check whether it is special symbol or not(!, @, #, $, %, ^, &, *).
// 
//  Input: %
//  Output: TRUE
//
//  Input: d
//  Output: FALSe

#include<stdio.h>
#include<stdbool.h>

bool CheckSpecial(char ch)
{
    if( ch >= '!' && ch <= '/' || 
        ch >= ':' && ch <= '@' ||
        ch >= '[' && ch <= '`' ||
        ch >= '{' && ch <= '~')
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

    printf("Entre the character: ");
    scanf("%c",&cValue);

    bRet = CheckSpecial(cValue);

    if(bRet == true)
    {
        printf("It is a special symbol.\n");
    }
    else
    {
        printf("It is not a special symbol.\n");
    }
    return 0;
}
