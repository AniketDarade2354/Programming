#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>  
#include <arpa/inet.h>   
#include <unistd.h>
#include <cstring>

using namespace std;

int main()
{
    int sock_fd = socket(AF_INET, SOCK_STREAM, 0);

    sockaddr_in server_addr;
    memset(&server_addr, 0, sizeof(server_addr));

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(9000);

    inet_pton(AF_INET, "127.0.0.1", &server_addr.sin_addr);

    connect(sock_fd, (struct sockaddr *)&server_addr, sizeof(server_addr));

    char Buffer[1024];
    
    while (fgets(Buffer, sizeof(Buffer), stdin) != nullptr)
    {
        size_t len = strlen(Buffer);

        write(sock_fd, Buffer, len);

        ssize_t bytes_read = read(sock_fd, Buffer, sizeof(Buffer));

        cout << Buffer << endl;
    }

    close(sock_fd);

    return 0;

}