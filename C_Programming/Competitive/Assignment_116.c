// Write a program which display ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
    int iCnt1 = 0;

    printf("Decimal\tHexa\tChar\tOctal\n");
    for(iCnt1 = 33; iCnt1 < 127; iCnt1++)
    {
        
        printf("%.2d\t%.2x\t%.2c\t%.2o\n",iCnt1,iCnt1,iCnt1,iCnt1);
    }

}

int main()
{
    DisplayASCII();

    return 0;
}

// Time Complexity: O(N)
// Where N > 0