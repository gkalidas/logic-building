// Write a program which accepts file name from user and count no of Capital characters from the given file.

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#define BUFFER_SIZE 1024

void displayN(char FName[], int iSize){
    int CharCount = 0, fd = 0, read_chars = 0, iDisplacement = 0;
    char arr[] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName, O_RDONLY);
    if(fd == -1){
        printf("Unable to open the file ");
    }
    else{
        read_chars = read(fd, Buffer, iSize);
        for (int iCnt = 0; iCnt < read_chars; iCnt++ ){
            printf("%c", Buffer[iCnt]);
        }
    }
}


int main(){
    char file_name[50] = {'\0'};
    int iValue = 0;

    printf("Enter file name : \n");
    scanf("%s", file_name);

    printf("Enter the size : \n");
    scanf(" %d", &iValue);

    displayN(file_name, iValue);

    return 0;

}
