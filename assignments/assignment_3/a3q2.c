// Write a program which accept number from user and print even factors of that number.

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i<=(iNo/2); i++)
    {
         if(iNo%i==0 && i%2==0)
         {
            printf("%d ",i);
         }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);
    return 0;
}