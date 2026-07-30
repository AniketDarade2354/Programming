// Program which accepts file name and one character from user and count number of occurrences of that characters from that file.
//
// Input: Demo.txt      'M'
// Output: Frequency of M is 1 

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 1024

#define ERR_FILE_NOT_OPEN -1

int CountChar(char FNAME[], char cChar)
{
    int fd = 0, iRet = 0, iCount = 0, i = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FNAME, O_RDONLY);

    if(fd == -1)
    {
        return ERR_FILE_NOT_OPEN;
    }

    while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] == cChar)
            {
                iCount++;
            }
        }

        memset(Buffer, '\0', iRet);
    }
    
    close(fd);

    return iCount;
}

int main()
{
    char FileName[30];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%[^'\n']s",FileName);

    printf("Enter character to count : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName, cValue);

    printf("Frequency of %c is %d\n",cValue, iRet);

    return 0;
}