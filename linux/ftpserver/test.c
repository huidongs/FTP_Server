//server.c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <arpa/inet.h>
#include <dirent.h>
#include <fcntl.h>
#define N 256
#define SOCK_PORT 8989

int visitor = 0;
int online_visitor = 0;
char online_list[N][N];
char buffer[1024];

void user_mkdir(int,char *);
void user_login(int,char *,char *);
void system_progress(int);
static void system_accept(void * sock_fd);   //Only can be seen in the file


int main(int arg, char *argv[]){
    char path_name[] ="mget qwe asd  ";
    char f[N],d[N];
    int i=0;
    strcpy(d,path_name);
    strtok(path_name," ");
    while(strtok(NULL," ")){

        i++;
    }
    strtok(d," ");
    while(i){
    	strcpy(f,strtok(NULL," "));
    	printf("%s\n", f);
    	i--;
    }
    printf("%d\n", i);

    return 0;
}

