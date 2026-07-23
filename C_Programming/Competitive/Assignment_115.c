// Accept division of student from user and depends on the division display exam timing. 
// There are 4 divisions in school as A,B,C,D.
// Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 and D at 10.30 AM.
// (Application should be case insensitive)
//
// Input: C
// Output: Your exam at 9.20 AM
//
// Input: d
// Output: Your exam at 10.30 AM

#include <stdio.h>

void DisplaySchedule(char cDiv)
{
    if(cDiv == 'A' || cDiv == 'a')
    {
        printf("Your exam at 7 AM\n");
    }
    else if(cDiv == 'B' || cDiv == 'b')
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if(cDiv == 'C' || cDiv == 'c')
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if(cDiv == 'D' || cDiv == 'd')
    {
        printf("Your exam at 10.30 AM\n");
    }
    else
    {
        printf("You entered division is not exist.\n");
        printf("Enter following divisions : A B C D\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);
    
    DisplaySchedule(cValue);

    return 0;
}