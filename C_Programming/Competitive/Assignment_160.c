// Application which accept file name from user and one string from user. write that string at end of file.
//
// Input: Demo.txt
//            Hello World
// Output: Write Hello World at the end of Demo.txt file.

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER_SIZE 1024

void AddContents(char FNAME[], char str[])
{
    int fd = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FNAME, O_RDONLY | O_APPEND);

    if(fd == -1)
    {
        return;
    }
    
    write(fd, str, strlen(str));

    close(fd);

}

int main()
{
    char FileName[30] = {'\0'};
    char str[30] = {'\0'};

    printf("Enter file name : \n");
    scanf("%[^'\n']s",FileName);

    printf("Enter string : \n");
    scanf(" %[^'\n']s",str);
    
    AddContents(FileName, str);
    
    return 0;
}