// Accept number from user and display below pattern.
// 
// Input: 5
// Output: 5 # 4 # 3 # 2 # 1 # 

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 1, iCount = iNo; iCnt <= iNo; iCnt++, iCount--)
    {
        printf("%d\t#\t",iCount);
    }
    printf("\n");
}   

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

// Time Complexity: O(N)
// Where N > 0