// file handling
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   // file control
#include<unistd.h>  // Universal standard .h
#include<string.h>

int main(){
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[50] = {'\0'};

    printf("Enter the file name that you wnat to open : \n");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY); // here is the change from previous file
    // O_WRONLY, O_RDONLY, O_CREAT
    if (fd == -1){
        printf("Unable to open file \n");
    }
    else{
        printf("File is successfully opened with fd : %d\n ", fd);
        // TODO - Write your own strlen function in practice.

        iRet = read(fd, Buffer, 11);
        printf("%d bytes got read successfully. ", iRet);
        printf("data from file is : %s", Buffer);
        close(fd);  // we just closed the file and reopened 

        fd = open(Fname, O_RDONLY);
        iRet = read(fd, Buffer, 20);
        printf("%d bytes got read successfully. ", iRet);
        printf("data from file is : %s", Buffer);
        close(fd);
    }

    return 0;
}
