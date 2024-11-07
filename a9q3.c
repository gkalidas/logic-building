// Write a program which accepts the distance in kilometer and converts it into meter
// (1000 meter = 1 kilometer)

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;

    return iMeter;   
}

int main()
{
    int iKM = 0;
    int iRet = 0;

    printf("Enter kilometer to be converted ");
    scanf("%d", &iKM);

    iRet = KMtoMeter(iKM);

    printf("%d\n", iRet);

    return 0;
}