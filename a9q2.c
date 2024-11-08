// Write a program which accepts width and height of rectangle from user
// and calculate it's area.(Area = Width * Height)

#include<stdio.h>

double RectangleArea(float fWidth, float fHeight)
{
    float Area = 0.0;
    Area = fWidth * fHeight;
    return Area;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter the value of Width");
    scanf("%f", &fValue1);

    printf("Enter the value of Height");
    scanf("%f", &fValue2);

    dRet = RectangleArea(fValue1, fValue2);

    printf("Area of dRet is %f", dRet);
    

    return 0;
}