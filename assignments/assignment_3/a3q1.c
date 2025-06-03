// Write a program which accept one number from user print that number of even number on screen.
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo%2 == 0){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    
    int iNumber = 1;
    while(iNo>0)
    {
        if (ChkEven(iNumber)){
            printf("%d", iNumber);
            iNo--;
        }
        iNumber++;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);
    return 0;
}
