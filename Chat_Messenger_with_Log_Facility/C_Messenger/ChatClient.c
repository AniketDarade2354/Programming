#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

#define PORT 2222

int main(int argc, char const *argv[])
{
    int iStatus = 0,
        iValRead = 0,
        iClient_Fd = 0;

    struct sockaddr_in serv_addr;

    char * hello = "Hello from client";
    char cBuffer[1024] = {0};

    iClient_Fd = socket(AF_INET, SOCK_STREAM, 0);

    if(iClient_Fd < 0)
    {
        printf("Socket Creation Error.\n");
        return -1;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) < 0)
    {
        printf("\nInvalid address/ Address not supported \n");
        return -1;
    }

    iStatus = connect(iClient_Fd, (struct sockaddr*)&serv_addr, sizeof(serv_addr));

    if(iStatus < 0)
    {
        printf("\nConnection Failed \n");
        return -1;
    }

    send(iClient_Fd, hello, strlen(hello), 0);
    printf("Hello message sent\n");

    iValRead = read(iClient_Fd, cBuffer, 1024-1);

    printf("%s\n",cBuffer);

    close(iClient_Fd);
    
    return 0;
}