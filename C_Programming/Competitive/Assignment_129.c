// Write a program which accept string from user and display only digits from that string.
//
// Input: "marve89llous121"
// Output: 89121
//
// Input: Demo
// Output: 

#include <stdio.h>

void DisplayDigits(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);   
        }
            
        str++;
    }
    printf("\n");
}

int main()
{
    char arr[50];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    DisplayDigits(arr);

    return 0;
}

// Time Complexity: O(N)
// Where N > 0