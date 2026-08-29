#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>     // sockaddr_in
#include <unistd.h>
#include <cstring>

using namespace std;

int main()
{
    int iRet = 0;
    int server_fd = socket(AF_INET, SOCK_STREAM ,0);

    if(server_fd == -1)
    {
        cout << "Socket is failed to create\n";
        return 1;
    }

    int opt = 1;
    iRet = setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    if(iRet == -1)
    {
        cout << "ERROR : setsocketopt()\n";
        return 1;
    }

    sockaddr_in sin;
    memset(&sin, 0, sizeof(sin));

    sin.sin_family = AF_INET;
    sin.sin_addr.s_addr = INADDR_ANY;
    sin.sin_port = htons(9000);


    iRet = bind(server_fd, (struct sockaddr *)&sin, sizeof(sin));

    if(iRet == -1)
    {
        cout << "ERROR : Bind() is failed\n";
        return 1;
    }

    cout << "Binding successfully with " << ntohs(sin.sin_port) << endl;

    close(server_fd);

    return 0;

}