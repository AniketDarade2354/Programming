// Accept number of rows and member of columns from user and display below pattern.
//
// Input: iRow = 4  iCol = 5
// Output: 2 4 6 8 10 
//         1 3 5 7 9
//         2 4 6 8 10 
//         1 3 5 7 9

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for ( j = 1; j <= (iCol * 2); j++)
        {
            if(i % 2 == 0)
            {
                if(j % 2 != 0)
                {
                    printf("%d\t",j);
                } 
            }
            else
            {
                if(j % 2 == 0)
                {
                    printf("%d\t",j);
                }
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

// Time Complexity: O(n*2m)
// where n,m > 0