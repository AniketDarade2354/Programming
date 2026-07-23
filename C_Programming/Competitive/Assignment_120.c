// Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
// 
//  Input: A
//  Output: Decimal     65
//          Octal       0101
//          Hexadecimal 0x41
//

#include<stdio.h>

void Display(char ch)
{
    if(ch >= '!' && ch <= '~')
    {
        printf("Decimal\t\t%d\n",ch);
        printf("Octal\t\t%o\n",ch);
        printf("Hexadecimal\t%#x\n",ch);
    }
}

int main()
{
    char cValue = '\0';
    

    printf("Entre the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
