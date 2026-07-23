// Write a program which accept string from user and copy small characters of that string into another string.
//
// Input: "Marvellous Multi OS"
// Output: "arvellous ulti"
//
#include <stdio.h>

void StrCpySmall(char *src, char *dest)
{
    // Filter
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z' || *src == ' ')
        {
            *dest = *src;
            dest++;
        }
       src++;
       
    } 
    
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];   // Empty string

    StrCpySmall(arr, brr);

    printf("%s\n",brr);
    return 0;
}

// Time Complexity: O(N)
// Where N > 0