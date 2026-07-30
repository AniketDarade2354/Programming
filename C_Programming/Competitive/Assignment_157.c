// Application which accept file name from user and create that file.
//
// Input: Demo.txt  
// Output: File created successfully.

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>

bool CreateFile(char FNAME[])
{
    int fd = 0;
    bool bFlag = false;

    fd = creat(FNAME, 0777);

    if(fd == -1)
    {
        bFlag = false;
    }
    else
    {
        bFlag = true;
    }

    return bFlag;
}

int main()
{
    char FileName[30];
    bool bRet = false;

    printf("Enter file name : \n");
    scanf("%[^'\n']s",FileName);

    
    bRet = CreateFile(FileName);

    if(bRet == true)
    {
        printf("File created successfully.\n");
    }
    else
    {
        printf("Unable to create file\n");
    }
    
    return 0;
}