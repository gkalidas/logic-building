// 8 DEC 2024
// * * * *

#include<stdio.h>

void DisplayR()
{
    static int iCnt = 1;  // Static storage class
    if(iCnt <=4)
    {
        printf("*\n");
        iCnt++ ;
        DisplayR(); // Recursive call
    }
}

int main()
{
    int iValue = 0;
    printf("inside main");
    scanf("")
    DisplayR();
    printf("End  of main");

    return 0;
}
