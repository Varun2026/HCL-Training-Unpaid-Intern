#include<stdio.h>

void leapyear(int a);

int a;

int main(){
    printf("Enter the year:\n");
    scanf("%d", &a);
    leapyear(a);
    return 0;
}

void leapyear(int a){
    if(a % 400 == 0){
        printf("Leap Year");
    }
    else if(a % 100 == 0){
        printf("Not a leap year");
    }
    else if(a % 4 == 0){
        printf("leap year");
    }
    else{
        printf("Not a leap year");
    }
}