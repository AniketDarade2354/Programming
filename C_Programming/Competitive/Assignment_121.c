// Write a program which accept string from user and count number of capital characters.
//
// Input: "Marvellous Multi OS"
//
// Output: 4

#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    int iCount = 0;

    while (*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }

        str++;
    }
    
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    iRet = CountCapital(arr);

    printf("Number of captial characters are :%d\n",iRet);

    return 0;
}