// Write a program which accepts file name from user and count no of Capital characters from the given file.

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#define BUFFER_SIZE 1024

int CountChar(char FName[], char ch){
    int CharCount = 0, fd = 0, read_chars = 0, iDisplacement = 0;
    char arr[] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    if (('A' <= ch) && (ch <= 'Z')){
        iDisplacement = 32;
    }
    else if (('a' <= ch) && (ch <= 'z')){
        iDisplacement = - 32;
    }

    fd = open(FName, O_RDONLY);
    if(fd == -1){
        printf("Unable to open the file ");
    }
    else{
        while((read_chars = read(fd, Buffer, BUFFER_SIZE)) != 0){
            for (int iCnt = 0; iCnt < read_chars; iCnt++ ){
                if ((Buffer[iCnt] == ch) || (Buffer[iCnt] == ch + iDisplacement)){
                    CharCount++;
                }
            }
            }
    }
    return CharCount;
}

int main(){
    char file_name[50] = {'\0'};
    int iRet = 0;
    char cValue;

    printf("Enter file name : \n");
    scanf("%s", file_name);

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    iRet = CountChar(file_name, cValue);

    printf("Given file contains %d characters ", iRet);

    return 0;

}
