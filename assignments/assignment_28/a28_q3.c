// Write application which accepts file name from user and read all data from that file and display conntents on the screen.

#include<stdio.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int main(){
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0, iRet = 0;

    printf("Enter the file name : ");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);
    if(fd == -1){
        printf("Unable to create the file.");
    }
   
    while((iRet=read(fd, Buffer, BUFFER_SIZE)) !=0){
        // printf("%s", Buffer);
        write(1, Buffer, iRet);
    }
    close(fd);

    return 0;
}
