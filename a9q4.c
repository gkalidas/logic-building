// Write a program which accepts temperature in Fahrenheit and convert it into celcius(1 Celcius = (Fahrenheit - 32) * (5/9))

// Input    : 10
// Output   : -12.2222

// Input    : 34
// Output   : 1.1111

#include<stdio.h>

double FhToCs(float fTemp)
{
    double dCelicus = 0.0;

    dCelicus = ((fTemp - 32) * (5.0/9.0));
    printf("%f\n", dCelicus);

    return dCelicus;    
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit\n");
    scanf("%f", &fValue);

    dRet = FhToCs(fValue);

    printf("%.4f\n", dRet);

    return 0;
}