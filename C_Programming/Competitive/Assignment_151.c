// Program which accepts file name from user and count number of capital characters from that file.
//
// Input: Demo.txt
// Output: Number of capital characters are 36

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 1024

#define ERR_FILE_NOT_OPEN -1

int CountCapital(char FNAME[])
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
            if(Buffer[i] >= 'A' && Buffer[i] <= 'Z')
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

    iRet = CountCapital(FileName);

    if(iRet == ERR_FILE_NOT_OPEN)
    {
        printf("%s is unable to open\n",FileName);
    }
    else
    {
        printf("Number of Capital characters are %d\n",iRet);
    }
    
    return 0;
}