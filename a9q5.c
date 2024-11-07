// Write a program to which accept area in square feet and convert it into
// square meter. (1 sq feet = 0.0929 sq meter)

// Input    : 5
// Output   : 0.464541

// Input    : 7
// Output   : 0.650321

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dAns = 0.0;
    dAns = 0.0929 * iValue;
    return dAns;
}

int main()
{
    int iValue1 = 0;
    double dRet = 0.0;

    printf("Enter area in square feet.");
    scanf("%d", &iValue1);

    dRet = SquareMeter(iValue1);

    printf("Area in square meter is %f", dRet);

    return 0;

}