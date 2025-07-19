#include<stdio.h>

void Display(){
    static int iCounter = 0;

    if(iCounter < 5){
        iCounter++;
        printf("%d ", iCounter);
        Display();
    }
}

int main(){
    Display();

    return 0;
}
