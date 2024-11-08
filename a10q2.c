// Write a program to accept a range from user and print even numbers from the given range on the console

// Input    : 25 35
// Output   : 26 28 30 32 34

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