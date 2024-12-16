// 8 DEC 2024
// * * * *

#include<stdio.h>

void DisplayI(int iNo)
{
    // static int iCnt = 1;
    while(iNo>=1)
    {
        printf("%d\n", iNo);
        iNo-- ;
        // DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter frequency.");
    scanf("%d", &iValue);

    DisplayI(iValue);
    printf("End  of main");

    return 0;
}
