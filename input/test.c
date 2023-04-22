#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<arpa/inet.h>

int main(int argc,char* argv[]) {
    printf("%x\n%x",argv['A'],argv['B']);
    printf(strcmp(argv['A'],"\x00"));
    return 0;
}
