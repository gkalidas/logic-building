// 8 DEC 2024
// * * * *

#include<stdio.h>

void DisplayR(int iNo)
{
    if(iNo>=1)
    {
        printf("%d\n", iNo);
        iNo-- ;
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
