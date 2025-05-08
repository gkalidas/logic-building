// Accept one number from user and print that number of * on the screen.
#include<stdio.h>

void Display(int iNo){
    while(iNo > 0){
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
