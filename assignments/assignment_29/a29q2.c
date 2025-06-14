// Write a program which accepts file name from user and count no of Capital characters from the given file.

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#define BUFFER_SIZE 1024

int CountSmall(char FName[]){
    int CharCount = 0, fd = 0, read_chars = 0;
    char arr[] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName, O_RDONLY);
    if(fd == -1){
        printf("Unable to open the file ");
    }
    else{
        while((read_chars = read(fd, Buffer, BUFFER_SIZE)) != 0){
            for (int iCnt = 0; iCnt < read_chars; iCnt++ ){
                if (('a' <= Buffer[iCnt]) && (Buffer[iCnt] <= 'z')){
                    CharCount ++;
                }
            }
        }
    }
    return CharCount;
}

int main(){
    char file_name[50] = {'\0'};
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%s", file_name);

    iRet = CountSmall(file_name);

    printf("Given file contains %d Small characters ", iRet);

    return 0;

}
