// Write a program which accept string from user and copy capital characters of that string into another string.
//
// Input: "Marvellous Multi OS"
// Output: "MMOS"
//
#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{
    // Filter
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
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

    StrCpyCap(arr, brr);

    printf("%s\n",brr);
    return 0;
}

// Time Complexity: O(N)
// Where N > 0