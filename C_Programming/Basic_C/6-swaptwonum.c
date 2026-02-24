#include<stdio.h>

int main(){
    int a,b;
    printf("Enter first number: \n");
    scanf("%d", &a);
    printf("Enter second number: \n");
    scanf("%d", &b);
    printf("%d %d\n", a, b);
    a = a+b;
    b = a - b;
    a = a - b;
    printf("%d %d\n", a, b);
    return 0;
}