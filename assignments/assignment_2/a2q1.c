// Accept one number from user and print that number of * on the screen.
#include<stdio.h>

// This was the solution I thought of as soon as I saw the question
// void Display(int iNo){
//     for(int i=0; i<iNo; i++){
//         printf("*\n");
//     }
// }

void Display(int iNo){
    int iCnt = 0;
    while(iCnt < iNo){
        printf("*");
        iCnt++;
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
