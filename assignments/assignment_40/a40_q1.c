#include<stdio.h>

void Display(){
    static int iCounter = 0;

    if(iCounter < 5){
        printf("* ");
        iCounter++;
        Display();
    }
}

int main(){
    Display();

    return 0;
}
