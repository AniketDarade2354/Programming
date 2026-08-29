#include <iostream>
#include <sys/socket.h>
#include <unistd.h>

using namespace std;

int main()
{
    int server_fd = socket(AF_INET, SOCK_STREAM ,0);

    if(server_fd == -1)
    {
        cout << "Socket is failed to create\n";
        return 1;
    }

    cout << "Socket created Successfully, fd = " << server_fd << endl;

    close(server_fd);

    return 0;
}