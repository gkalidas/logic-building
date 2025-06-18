#include<iostream>
#include<stdbool.h>

using namespace std;

// Write a program which accepts a no from user and
// OFF 7th and 10th bit if it is ON, return modified number.

typedef unsigned int UINT;

UINT OFFBit(UINT iNo){
    UINT iMask1 = 0x00000040; // 7th bit
    UINT iMask2 = 0x00000200; // 10th bit
    UINT iResult = 0;

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    UINT iMask = (iMask1 & iMask2);

    iResult = iNo & iMask;
    return iResult;
}

int main(){
    UINT iValue = 0;
    UINT iRet;

    cout<<"Enter number ";
    cin>>iValue;

    iRet = OFFBit(iValue);
    cout<<"Modified no is "<<iRet;

    return 0;
}