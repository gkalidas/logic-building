// Write a program which accepts file name from user and count no of Capital characters from the given file.

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#define BUFFER_SIZE 1024

int CountCapital(char FName[]){
    int CapitalCount = 0, fd = 0, read_chars = 0;
    char arr[] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName, O_RDONLY);
    if(fd == -1){
        printf("Unable to open the file ");
    }
    else{
        while((read_chars = read(fd, Buffer, BUFFER_SIZE)) != 0){
            for (int iCnt = 0; iCnt < read_chars; iCnt++ ){
                if (('A' <= Buffer[iCnt]) && (Buffer[iCnt] <= 'Z')){
                    CapitalCount ++;
                }
            }
        }
    }
    return CapitalCount;
}

int main(){
    char file_name[50] = {'\0'};
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%s", file_name);

    iRet = CountCapital(file_name);

    printf("Given file contains %d Capital characters ", iRet);

    return 0;

}
