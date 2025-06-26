#include<iostream>
#include<stdbool.h>

using namespace std;
typedef unsigned int UINT;

// Write a program which accepts one number from user and position from user and
// check whether bit at that position is ON or OFF. If bit is ON return True else
// return false.


bool CheckBit(UINT no, int pos){
    UINT mask = 1;
    UINT iResult = 0;

    mask = mask << (pos - 1);
    iResult = no & mask;
    return (iResult == mask);
}

int main(){
    UINT value = 0;
    int position = 0;
    bool bRet = false;

    cout<<"Enter no";
    cin>>value;

    cout<<"Enter position";
    cin>>position;

    bRet = CheckBit(value, position);
    if (bRet == true){
        cout<<"Bit at" <<position<<"th given position is ON.";
    }
    else{
        cout<<"Bit at" <<position<<"th given position is OFF.";
    }
    

    return 0;
}