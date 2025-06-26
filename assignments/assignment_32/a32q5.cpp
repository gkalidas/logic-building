#include<iostream>
#include<stdbool.h>
#include<cstdint>  // for uint32_t

using namespace std;
typedef uint32_t UINT;

// Write a program which accepts one number from user and toggle the content of first and last nibble of that number


UINT ToggleBit(UINT no){
    UINT mask = 0xF000000F;
    UINT iResult;

    cout<<"\nmask is "<<std::hex <<mask;
    cout<<"\nmask is "<<std::dec <<mask;
    iResult = no ^ mask;
    cout<<"\niresult is "<<iResult;

    return iResult;
}

int main(){
    UINT value = 0;
    UINT Result;


    cout<<"Enter no";
    cin>>value;

    cout << "You entered (decimal): " << value << endl;
    cout << "You entered (hex): 0x" << std::hex << value << std::dec << endl;

    Result = ToggleBit(value);
    cout<<"\nModified bit is "<<Result;

    return 0;
}