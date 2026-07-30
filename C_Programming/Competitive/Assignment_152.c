// Program which accepts file name from user and count number of small characters from that file.
//
// Input: Demo.txt
// Output: Number of small characters are 181

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 1024

#define ERR_FILE_NOT_OPEN -1

int CountSmall(char FNAME[])
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
            if(Buffer[i] >= 'a' && Buffer[i] <= 'z')
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
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%[^'\n']s",FileName);

    iRet = CountSmall(FileName);

    printf("Number of small characters are %d\n",iRet);

    return 0;
}