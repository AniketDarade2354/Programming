// Application which accept file name from user and open that file in read mode.
//
// Input: Demo.txt  
// Output: File opened successfully.

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>

bool OpenFile(char FNAME[])
{
    int fd = 0;
    bool bFlag = false;

    fd = open(FNAME, O_RDONLY);

    if(fd == -1)
    {
        bFlag = false;
    }
    else
    {
        bFlag = true;
    }

    close(fd);

    return bFlag;
}

int main()
{
    char FileName[30];
    bool bRet = false;

    printf("Enter file name : \n");
    scanf("%[^'\n']s",FileName);

    
    bRet = OpenFile(FileName);

    if(bRet == true)
    {
        printf("File opened successfully.\n");
    }
    else
    {
        printf("Unable to open file\n");
    }
    
    return 0;
}