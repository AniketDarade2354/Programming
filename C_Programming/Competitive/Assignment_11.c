// Program which accept one number from user and print that number of even numbers on screen.

#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    if(iNo <= 0)
    {
        return;
    }

    iCnt2 = 1;
    for(iCnt1 = 2; iCnt2 <= iNo; iCnt1 = iCnt1 + 2)
    {
        if((iCnt1 % 2) == 0)
        {
            printf("%d ",iCnt1);
            iCnt2++;
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}