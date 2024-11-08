// Write a program to accept a range from user and print the given range on the console

// Input    : 25 35
// Output   : 25 26 27 28 29 30 31 32 33 34 35

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    if (iStart > iEnd)
    {
        printf("Invalid range.");
    }
    else
    {
        while(iStart <= iEnd)
        {
            if (iStart%2==0)
            {
                printf("%d ", iStart);
            }
            
            iStart ++;
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter starting point\n");
    scanf("%d", &iValue1);

    printf("Enter End point\n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;

}