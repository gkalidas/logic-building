// 8 DEC 2024
// * * * *

#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 1;
    if (iCnt<=iNo)
    {
        printf("%d\n", iCnt);
        iCnt++ ;
        DisplayR(iNo);
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
