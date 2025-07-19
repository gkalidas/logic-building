#include<stdio.h>

void Display(){
    static int iCounter = 5;

    if(iCounter > 0){
        // iCounter++;
        printf("%d ", iCounter);
        iCounter--;
        Display();
    }
}

int main(){
    Display();

    return 0;
}
