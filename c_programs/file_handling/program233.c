// file handling
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   // file control
#include<unistd.h>  // Universal standard .h
#include<string.h>

int main(){
    char Fname[20] = {'\0'};
    int fd = 0;
    char Buffer[] = "India is my country";
    int iRet = 0;

    printf("Enter the file name that you wnat to open : \n");
    scanf("%s", Fname);

    fd = open(Fname, O_RDWR | O_APPEND); // here is the change from previous file
    if (fd == -1){
        printf("Unable to open file \n");
    }
    else{
        printf("File is successfully opened with fd : %d\n ", fd);
        // TODO - Write your own strlen function in practice.
        iRet = write(fd, Buffer, strlen(Buffer));
        printf("%d bytes got written successfully. ", iRet);
        close(fd);
    }

    return 0;
}
