#include<stdio.h>

void Display(){
    static int iCounter = 0;

    if(iCounter < 5){
        printf("%c ", iCounter+97);
        iCounter++;
        Display();
    }
}

int main(){
    Display();

    return 0;
}
