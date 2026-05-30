// Accept one character from user and check whether that character is vowel(a,e,i,o,u) or not.

#include <stdio.h>

void CheckVowel(char cValue)
{
    if(cValue == 'A' || cValue == 'a')
    {
        printf("TRUE\n");
    }
    else if(cValue == 'E' || cValue == 'e')
    {
        printf("TRUE\n");
    }
    else if(cValue == 'I' || cValue == 'i')
    {
        printf("TRUE\n");
    }
    else if(cValue == 'O' || cValue == 'o')
    {
        printf("TRUE\n");
    }
    else if(cValue == 'U' || cValue == 'u')
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c",&cValue);

    CheckVowel(cValue);
    return 0;
}