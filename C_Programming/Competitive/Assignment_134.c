// Write a program which accept string from user and accept one character. Return index of last occurrence of that character.
//
// Input: "Marvellous Multi OS"
//          M
// Output: 0
//
// Input: "Marvellous Infosystems"
//          W
// Output: -1
// 
// Input: "Marvellous Multi OS"
//          e
// Output: 4

#include <stdio.h>

int FirstCharacter(char *str, char ch)
{
    int iCnt = 0;
    int iReturn = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iReturn = iCnt;  
        }
            
        str++;
        iCnt++;
    }
    return iReturn;
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

    iRet = FirstCharacter(arr, cValue);

    printf("Character location is %d\n",iRet);
    return 0;
}

// Time Complexity: O(N)
// Where N > 0