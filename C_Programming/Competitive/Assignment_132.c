// Write a program which accept string from user and accept one character. Return frequency of that character.
//
// Input: "Marvellous Multi OS"
//          M
// Output: 2
//
// Input: "Marvellous Infosystems"
//          W
// Output: 0

#include <stdio.h>

int CountCharacter(char *str, char ch)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;           
        }
            
        str++;
    }
    return iCount;
}

int main()
{
    char arr[50];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character: \n");
    scanf(" %c",&cValue);

    iRet = CountCharacter(arr, cValue);

    printf("Character frequency is %d\n",iRet);
    return 0;
}

// Time Complexity: O(N)
// Where N > 0