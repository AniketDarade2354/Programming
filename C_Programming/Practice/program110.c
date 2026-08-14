#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "Ganesh";   
    int iCount = 0;

    printf("Length of string : %lu\n",strlen(str));
    
    while (*str != '\0')
    {
        iCount++;
        str++;
    }

    printf("Length of string : %d\n",iCount);
    
    return 0;
}