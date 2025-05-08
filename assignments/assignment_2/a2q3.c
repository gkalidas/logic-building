// Accept one number from user and if number is less than 10 print "Hello" otherwise print "Demo".
#include<stdio.h>


void Display(int iNo){
    int iCnt = 0;
    if(iNo < 10){
        printf("Hello");
    }
    else{
        printf("Demo");
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
