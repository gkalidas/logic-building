#include<iostream>
#include<stdbool.h>

using namespace std;

// Write a program which accepts a no from user and
// OFF 7th and 10th bit if it is ON, return modified number.

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo){
    UINT iMask = 0x00000040; // 7th bit

    iNo = iNo ^ iMask;
    return iNo;
}

int main(){
    UINT iValue = 0;
    UINT iRet;

    cout<<"Enter number ";
    cin>>iValue;

    iRet = ToggleBit(iValue);
    cout<<"Modified no is "<<iRet;

    return 0;
}