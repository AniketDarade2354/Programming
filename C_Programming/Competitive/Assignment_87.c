// Accept number of rows and member of columns from user and display below pattern.
//
// Input: iRow = 4  iCol = 4
// Output: A B C D
//         a b c d
//         A B C D
//         a b c d

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char cCapital = '\0';
    char cSmall = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for ( j = 1, cCapital = 'A', cSmall = 'a'; j <= iCol; j++, cCapital++, cSmall++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t", cSmall);
            }
            else
            {
                printf("%c\t", cCapital);
            }
                   
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}