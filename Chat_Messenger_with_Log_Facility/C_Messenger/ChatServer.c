#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

#define PORT 2222

void CreateSocket(int * iServer)
{
    *iServer = socket(AF_INET, SOCK_STREAM, 0);
    
    if(*iServer < 0)
    {
        perror("Socket failed");
        exit(EXIT_FAILURE);
    }
}

int main(int argc, char const* argv[])
{

    int iServer_Fd = 0,
        iNewSocket = 0;
    ssize_t iValRead = 0;
    struct sockaddr_in address;
    int iOpt = 1;
    
    socklen_t addrlen = sizeof(address);
    
    char cBuffer[1024] = {0};
    char * hello = "Hello from server";

    CreateSocket(&iServer_Fd);

    if(setsockopt(iServer_Fd, SOL_SOCKET, SO_REUSEADDR , &iOpt, sizeof(iOpt)))
    {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if(bind(iServer_Fd, (struct sockaddr*)&address, sizeof(address)) < 0)
    {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }

    if(listen(iServer_Fd, 3) < 0)
    {
        perror("listen");
        exit(EXIT_FAILURE);
    }

    iNewSocket = accept(iServer_Fd, (struct sockaddr*)&address, &addrlen);

    if(iNewSocket < 0)
    {
        perror("accept");
        exit(EXIT_FAILURE);
    }

    while (*cBuffer != '0')
    {
        iValRead = read(iNewSocket, cBuffer, 1024-1);

        if(iValRead <= 0)
        {
            write(0,"Client Disconnect\n",19);
        }

        printf("Client Says: %s\n",cBuffer);

        send(iNewSocket, hello, strlen(hello), 0);

        printf("Hello message sent\n");
    }
    
    

    close(iNewSocket);

    close(iServer_Fd);

    return 0;
}