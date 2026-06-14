// Accept one character from user and convert case of that character.

#include <stdio.h>
#include <ctype.h>

void DisplayConvert(char cValue)
{
    if(isupper(cValue))
    {
        printf("%c\n",tolower(cValue));
    }
    else if(islower(cValue))
    {
        printf("%c\n",toupper(cValue));
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}