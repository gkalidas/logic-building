#include<iostream>
#include<stdbool.h>

using namespace std;
typedef unsigned int UINT;

// Write a program which accepts one number from user and position from user and
// Toggle that bit.

// Input 10 3
// Output 14

// Input 14 3
// Output 10

UINT ToggleBit(UINT no, int pos){
    UINT mask = 1;
    UINT iResult = 0;

    mask = mask << (pos - 1);
    iResult = no ^ mask;

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

    Result = ToggleBit(value, position);
    cout<<"\nModified bit is "<<Result;    

    return 0;
}