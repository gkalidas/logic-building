#include<stdio.h>
#include<stdlib.h>
// Write a program which checks whether 15th bit ON or OFF.

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo){
    UINT iMask = 0x00004000;
    // UINT iResult = 0;

    UINT iResult = iMask & iNo;
    printf("Value of result is %u \n", iResult);
    return (iResult !=0);
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