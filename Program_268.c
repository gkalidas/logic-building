// 8 DEC 2024
// * * * *

#include<stdio.h>

void DisplayR()
{
    int iCnt = 1;   // Static storage class
    if(iCnt <=4)
    {
        printf("*\n");
        iCnt++ ;
        DisplayR(); // Recursive call
    }
}

int main()
{
    DisplayR();

    return 0;
}