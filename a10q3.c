// Write a program to accept a range from user and print the addition of given range on the console

// Input    : 23 30
// Output   : 212

#include<stdio.h>

int RangeDisplay(int iStart, int iEnd)
{
    int iSum = 0;
    if (iStart > iEnd)
    {
        printf("Invalid range.\n");
    }
    else
    {
        while(iStart <= iEnd)
        {
            iSum += iStart;
            iStart ++;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    
    printf("Enter starting point\n");
    scanf("%d", &iValue1);

    printf("Enter End point\n");
    scanf("%d", &iValue2);

    iRet = RangeDisplay(iValue1, iValue2);
    printf("Addition of given numbers is %d\n", iRet);

    return 0;
}
