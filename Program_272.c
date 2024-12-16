// 8 DEC 2024
// * * * *

#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 1;  // Static storage class
    if(iCnt <=iNo)
    {
        printf("*\n");
        iCnt++ ;
        DisplayR(iNo); // Recursive call
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter frequency.");
    scanf("%d", &iValue);

    DisplayR(iValue);
    printf("End  of main");

    return 0;
}
