#include<iostream>
#include<stdbool.h>

using namespace std;
typedef unsigned int UINT;

// Write a program which accepts one number from user and position from user and
// check whether bit at that position is ON or OFF. If bit is ON return True else
// return false.


UINT OffBit(UINT no, int pos){
    UINT mask = 1;
    UINT iResult = 0;

    mask = mask << (pos - 1);
    mask = ~mask;
    iResult = no & mask;
    return iResult;
}

int main(){
    UINT value = 0;
    int position = 0;
    UINT Result;

    cout<<"Enter no";
    cin>>value;

    cout<<"Enter position";
    cin>>position;

    Result = OffBit(value, position);
    cout<<"Modified bit is "<<Result;    

    return 0;
}