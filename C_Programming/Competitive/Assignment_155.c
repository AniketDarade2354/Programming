// Program which accepts file name and one count from user and read that number of characters from starting position.
//
// Input: Demo.txt      12
// Output: Display first 12 character from Demo.txt 

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 1024

void DisplayN(char FNAME[], int iSize)
{
    int fd = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FNAME, O_RDONLY);

    if(fd == -1)
    {
        return;
    }
    
    while (iSize > 0)
    {
        if(iSize < BUFFER_SIZE)
        {
            iRet = read(fd, Buffer, iSize);
                
            write(1,Buffer,iRet);
        }
        else
        {
            iRet = read(fd, Buffer, sizeof(Buffer));
            
            write(1, Buffer, sizeof(Buffer));
        }

        iSize = iSize - iRet;
            
        memset(Buffer, '\0', iRet);
    }          

    close(fd);
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter file name : \n");
    scanf("%[^'\n']s",FileName);

    printf("Enter the number of characters : \n");
    scanf(" %d",&iValue);

    DisplayN(FileName, iValue);

    return 0;
}