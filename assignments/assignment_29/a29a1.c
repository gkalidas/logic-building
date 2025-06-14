// Write a program which accepts file name from user and count no of Capital characters from the given file.

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#define BUFFER_SIZE 1024

int countChars(char arr[]){
    int CapitalCount = 0;
    while(*arr != '\0'){
        if (('A' <= *arr) && (*arr <= 'Z')){
            CapitalCount++;
        }
        arr++;
    }
    return CapitalCount;
}

int main(){
    char file_name[50] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, fd = 0, CharCount = 0;

    printf("Enter file name : \n");
    scanf("%s", file_name);

    fd = open(file_name, O_RDONLY);
    if(fd == -1){
        printf("Unable to open the file ");
    }
    else{
        while((iRet = read(fd, Buffer, BUFFER_SIZE)) != 0){
            CharCount = CharCount + countChars(Buffer);
        }
    }
    printf("Given file contains %d Capital characters ", CharCount);

    return 0;

}
