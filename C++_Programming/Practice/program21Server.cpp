#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>     // sockaddr_in
#include <unistd.h>
#include <cstring>
#include <signal.h>

using namespace std;

int main()
{
    int iRet = 0;
    
    int server_fd = socket(AF_INET, SOCK_STREAM ,0);

    int opt = 1;
    iRet = setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    sockaddr_in sin;
    memset(&sin, 0, sizeof(sin));

    sin.sin_family = AF_INET;
    sin.sin_addr.s_addr = INADDR_ANY;
    sin.sin_port = htons(9000);


    iRet = bind(server_fd, (struct sockaddr *)&sin, sizeof(sin));

    iRet = listen(server_fd, 5);

    signal(SIGCHLD, SIG_IGN);

    while(true)
    {
        sockaddr_in client_addr;
        socklen_t client_len = sizeof(client_addr);

        int client_fd = accept(server_fd, (struct sockaddr *)&client_addr, &client_len);

        cout << "Client connected , fd = " << client_fd << endl;

        int pid = fork();

        if(pid == 0)
        {
            close(server_fd);

            char Buffer[1024];
            ssize_t bytes_read = 0;

            while ((bytes_read = read(client_fd, Buffer, sizeof(Buffer))) > 0)
            {
                printf("Received %zd bytes: %.*s", bytes_read, (int)bytes_read, Buffer);

                write(client_fd, Buffer, bytes_read);
            }

            cout << getpid() <<"Client Disconnected\n";
            

            close(client_fd);
            return 0;

        }
        else
        {
            close(client_fd);
        }

        
        
    }
    close(server_fd);

    return 0;

}