// Write application which accepts file name from user and open that file in read mode.

#include<stdio.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int main(){
    char Fname[20] = {'\0'};
    int fd = 0;

    printf("Enter the file name : ");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);
    if(fd == -1){
        printf("Unable to open the file.");
    }
    else{
        printf("File opened successfully.");
    }
    close(fd);
    return 0;
}
