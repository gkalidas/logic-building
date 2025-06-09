// file handling
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   // file control
#include<unistd.h>  // Universal standard .h
#include<string.h>

int main(){
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[10] = {'\0'};

    printf("Enter the file name that you wnat to open : \n");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);
    // O_WRONLY, O_RDONLY, O_CREAT
    if (fd == -1){
        printf("Unable to open file \n");
    }
    else{
        printf("File is successfully opened with fd : %d\n ", fd);
        // TODO - Write your own strlen function in practice.

        while((iRet=read(fd, Buffer, 10)) !=0){
            // printf("%s", Buffer);
            write(1, Buffer, iRet);
            // cleanging the garbage
            memset(Buffer,'\0', 10);
        }   
    }
    return 0;
}
