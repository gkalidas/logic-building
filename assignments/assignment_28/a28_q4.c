// Write application which accepts file name from user and display size of the file.

#include<stdio.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int main(){
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0, iRet = 0, size = 0;

    printf("Enter the file name : ");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);
    if(fd == -1){
        printf("Unable to create the file.");
    }
   
    while((iRet=read(fd, Buffer, BUFFER_SIZE)) !=0){
        size = size + iRet;
    }
    printf("File size is %d bytes.", size);
    close(fd);
    return 0;
}
