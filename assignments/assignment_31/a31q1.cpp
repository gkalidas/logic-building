#include<iostream>
#include<stdbool.h>

using namespace std;

// Write a program which accepts a no from user and
// OFF 7th bit if it is ON, return modified number.

typedef unsigned int UINT;

UINT OFFBit(UINT iNo){
    UINT iMask1 = 0x00000040; // 7th bit
    UINT iResult;

    cout<<"iMask is "<<iMask1;

    iResult = iNo ^ iMask1;
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