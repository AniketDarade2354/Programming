// Application which accept file name from user and read all data from that file and display contents on screen.
//
// Input: Demo.txt  
// Output: Display all data of file.

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER_SIZE 1024

void DisplayFileContents(char FNAME[])
{
    int fd = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FNAME, O_RDONLY);

    if(fd == -1)
    {
        return;
    }
    
    while ((iRet = read(fd, Buffer, sizeof(Buffer))))
    {
        write(1, Buffer, iRet);

        memset(Buffer, '\0', iRet);
    }

    close(fd);
}

int main()
{
    char FileName[30];
    
    printf("Enter file name : \n");
    scanf("%[^'\n']s",FileName);
    
    DisplayFileContents(FileName);

    printf("\n");
    return 0;
}