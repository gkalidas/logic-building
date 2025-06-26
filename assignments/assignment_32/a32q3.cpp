#include<iostream>
#include<stdbool.h>

using namespace std;
typedef unsigned int UINT;

// Write a program which accepts one number from user and position from user and
// ON that bit.


UINT ONBit(UINT no, int pos){
    UINT mask = 1;
    UINT iResult = 0;

    mask = mask << (pos - 1);
    // mask = ~mask;
    cout<<"\nmask "<<mask;
    iResult = no | mask;
    cout<<"\niresult "<<iResult;
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

    Result = ONBit(value, position);
    cout<<"\nModified bit is "<<Result;    

    return 0;
}