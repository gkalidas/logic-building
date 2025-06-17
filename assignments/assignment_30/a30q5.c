#include<stdio.h>
#include<stdlib.h>
// Write a program which checks whether 7th, 15th, 21st and 28th  bit is ON or OFF.

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo){
    UINT iMask1 = 0x00000001; // 7th bit
    UINT iMask2 = 0x80000000; // 8th bit

    UINT iMask = iMask1 | iMask2;

    UINT iResult = iMask & iNo;

    printf("iNo     : %u (0x%X)\n", iNo, iNo);
    printf("iMask   : %u (0x%X)\n", iMask, iMask);
    printf("iResult : %u (0x%X)\n", iResult, iResult);

    return (iResult == iMask);
}

int main(){
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%u", &iValue);
    // iValue = 135282752;
    printf("You entered: %u (0x%X)\n", iValue, iValue);

    bRet = CheckBit(iValue);
    // printf(bRet);
    if(bRet == TRUE){
        printf("7th, 15th, 21st and 28th position bit is ON.");
    }
    else{
        printf("7th, 15th, 21st and 28th position bit is OFF.");
    }

    return 0;
}