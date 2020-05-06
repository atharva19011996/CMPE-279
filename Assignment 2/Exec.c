#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#define PORT 8080
int main(int argc, char *argv[]){ 
    int server_fd, new_socket, valread;
    struct sockaddr_in address;
    int opt = 1;
    int status;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};
    char *hello = "Hello from server";



    printf("Inside Exec\n");
    int socket = (int) *argv[2];
    valread = read( socket , buffer, 1024);
    printf("        %s\n",buffer );
    send(socket , hello , strlen(hello) , 0 );
    printf("        Hello message sent\n");
    printf("Exec Finished\n");
    return 0;	
}
