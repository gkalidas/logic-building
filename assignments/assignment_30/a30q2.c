#include<stdio.h>
#include<stdlib.h>
// Write a program which checks whether 5th and 18th  bit is ON or OFF.

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo){
    UINT iMask1 = 0x00000010; // 5th bit
    UINT iMask2 = 0x00020000; // 18th bit

    UINT iMask = iMask1 | iMask2;

    UINT iResult = iMask & iNo;
    return (iResult == iMask);
}

int main(){
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%u", &iValue);

    bRet = CheckBit(iValue);
    // printf(bRet);
    if(bRet == TRUE){
        printf("15th position bit is ON.");
    }
    else{
        printf("15th position bit is OFF.");
    }

    return 0;
}