// Write a program which accept string from user and check whether it contains vowels in it or not.
//
// Input: "marvellous"
// Output: Contains vowels
//
// Input: "Demo"
// Output: Contains vowels
//
// Input: "xyz"
// Output: There is no vowels


#include <stdio.h>
#include <stdbool.h>

bool CheckVowels(char *str)
{
    bool bValue = false;

    while(*str != '\0')
    {

        if( (*str == 'A' || *str == 'a') ||
            (*str == 'E' || *str == 'e') ||
            (*str == 'I' || *str == 'i') ||
            (*str == 'O' || *str == 'o') ||
            (*str == 'U' || *str == 'u') )
            {
                bValue = true;
                break;        
            }

        str++;
    }

    return bValue;
}

int main()
{
    char arr[20];
    bool bRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    bRet = CheckVowels(arr);

    if(bRet == true)
    {
        printf("Contains vowels.\n");
    }
    else
    {
        printf("There is no vowels.\n");
    }

    return 0;
}