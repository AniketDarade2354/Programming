// Write a program which accept string from user and copy the contents of that string into another string.
// (Implement strncpy() function)
//
// Input: "Marvellous Multi OS"
// Output: "Marvellous"    in another string
//
// Note: If third parameter is greater than the size of source string then copy whole string into destination.

#include <stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    // Filter
    while((*src != '\0') && (iCnt != 0))
    {
      *dest = *src;
       src++;
       dest++;
       iCnt--;
    } 
    
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];   // Empty string

    StrNCpyX(arr, brr, 10);

    printf("%s\n",brr);
    return 0;
}

// Time Complexity: O(N)
// Where N > 0