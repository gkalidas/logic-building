#include<iostream>
#include<stdbool.h>

using namespace std;

// Write a program which accepts a no from user and
// ON it's 4th bit, return modified number.

typedef unsigned int UINT;

UINT OnBit(UINT iNo){
    UINT iMask = 0x00000008; // 4th bit
    // cout<<""<<std::hex;
    // cout<<""<<std::;
    // cout<<""<<std::hex;
    iNo = iNo | iMask;

    return iNo;
}

int main(){
    UINT iValue = 0;
    UINT iRet;

    cout<<"Enter number ";
    cin>>iValue;

    iRet = OnBit(iValue);
    cout<<"Modified no is "<<iRet;

    return 0;
}