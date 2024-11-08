// Write a program which accepts radius of circle from user and calculate its area.
// Consider value of PI 3.14 (Area = PI * radius * radius)

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dAns = 0.0;
    const float PI = 3.14;

    dAns = PI * fRadius * fRadius;

    return dAns;
}


int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius\n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle %f\n", dRet);

    return 0;
}
