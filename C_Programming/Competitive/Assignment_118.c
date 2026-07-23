// Accept character from user. If it is capital then display all the character from the input characters till Z. If input character is small then print all the characters in reverse order till a. In other cases return directly.
// 
//  Input: Q
//  Output: Q R S T U V W X Y Z
//
//  Input: m
//  Output: m l k j i h g f e d c b a
//
//  Input: 8 
//  Output:  

#include<stdio.h>

void Display(char ch)
{
    char cCnt = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        for(cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c ", cCnt);
        }    
        printf("\n");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c ", cCnt);
        }    
        printf("\n");
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

// Time Complexity: O(N)
// Where N > 0