// Write a program which 2 strings from user and concate second string after first string.
//  (Implement strcat() function)
// Input: "Marvellous Infosystems"
//        "Logic Building"
//
// Output:"Marvellous Infosystems Logic Building"

#include <stdio.h>

void StrCatX(char *src, char *dest)
{
    // Filter
    while(*src != '\0')
    {
          src++;
    }

    *src = ' ';

    while (*dest != '\0')
    {
        src++;

        *src = *dest;
        
        dest++;
    }
    
    
}

int main()
{
    char arr[100] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";

    StrCatX(arr, brr);

    printf("%s\n",arr);
    return 0;
}

// Time Complexity: O(2N)
// Where N > 0