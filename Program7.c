// Write a program to accept two numbers from user and 
// display the multiplication
// Author: Ganesh Londhe
// Date: 11 OCT 2022

#include<stdio.h>

int Multiplication(int iValue1, int iValue2)
{
    int iAns = 0;
    iAns = iValue1 * iValue2;
    return iAns;
}

int main()
{
    int iNo1 = 0, iNo2 = 0, iMult = 0;

    printf("Enter first number : \n");
    scanf("%d", &iNo1);

    printf("Enter second number : \n");
    scanf("%d", &iNo2);

    printf("First number is : %d\n", iNo1);
    printf("Second number is : %d\n", iNo2);

    iMult = Multiplication(iNo1, iNo2);
    printf("Multiplication is : %d\n", iMult);

    return 0;
}
