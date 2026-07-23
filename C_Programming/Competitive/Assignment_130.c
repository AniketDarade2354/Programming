// Write a program which accept string from user and count number of white spaces.
//
// Input: "MarvellouS"
// Output: 0
//
// Input: "Marvellous Infosystems"
// Output: 1
//
// Input: "Marvellous Infosystems by Piyush Manohar Khairnar"
// Output: 5

#include <stdio.h>

int CountWhiteSpaces(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    iRet = CountWhiteSpaces(arr);

    printf("Number of white spaces are : %d\n",iRet);
    return 0;
}

// Time Complexity: O(N)
// Where N > 0