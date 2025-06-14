// Write application which accepts file name from user and one string from user. Write that string at the
// at the end of file.

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   // file control
#include<unistd.h>  // Universal standard .h
// #include<string.h>

#define BUFFER_SIZE 1024

int strlen(char *arr){
    int CharLen = 0;
    while(*arr != '\0'){
        CharLen++;
        arr++;
    }
    return CharLen;
}

int main(){

    int iRet = 0, fd = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};
    char file_name[50] = {'\0'};

    printf("Enter file name : \n");
    scanf("%s", file_name);

    printf("Enter string to be appended. \n");
    scanf("%s", Buffer);

    fd = open(file_name, O_WRONLY | O_APPEND);
    if(fd == -1){
        printf("Unable to open the file.");
    }
    printf("File is successfully opened with fd : %d\n ", fd);
    printf("String length is %d ", strlen(Buffer));
    printf("String is %s ", Buffer);
    iRet = write(fd, Buffer, strlen(Buffer));
    printf("Wrote %d characters to the file.", iRet);
    if(iRet >0){
        printf("String written to the file successfully.");
    }
    else{
        printf("Unable to write to the file.");
    }
    close(fd);

    return 0;
}