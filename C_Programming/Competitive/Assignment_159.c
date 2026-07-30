// Application which accept file name from user and display size of file.
//
// Input: Demo.txt  
// Output: File size is 437 bytes.

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER_SIZE 1024

int DisplayFileSize(char FNAME[])
{
    int fd = 0, iRet = 0, iCount = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FNAME, O_RDONLY);

    if(fd == -1)
    {
        return -1;
    }
    
    while ((iRet = read(fd, Buffer, sizeof(Buffer))))
    {
        for(int i = 0; i < iRet; i++)
        {
            iCount++;
        }

        memset(Buffer, '\0', iRet);
    }

    close(fd);

    return iCount;
}

int main()
{
    char FileName[30];
    unsigned int iRet = 0;

    printf("Enter file name : \n");
    scanf("%[^'\n']s",FileName);
    
    iRet = DisplayFileSize(FileName);

    if(iRet == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("Size of file is : %d bytes\n", iRet);
    }
    return 0;
}