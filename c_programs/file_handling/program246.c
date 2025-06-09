// file handling
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   // file control
#include<unistd.h>  // Universal standard .h
#include<string.h>

// user defined macro
#define BUFFER_SIZE 1024

int main(){
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0, iCnt = 0, iCapCount = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

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

        while((iRet=read(fd, Buffer, BUFFER_SIZE)) !=0){
            
            for(iCnt = 0; iCnt < iRet; iCnt++){
                printf("%c\n", Buffer[iCnt]);
                if ('A' <= Buffer[iCnt] && Buffer[iCnt] <= 'Z'){
                    iCapCount ++;
                }
            }

            // cleanging the garbage
            memset(Buffer,'\0', BUFFER_SIZE);
        }
        printf("No of capital characters are %d\n", iCapCount);
    }
    return 0;
}
