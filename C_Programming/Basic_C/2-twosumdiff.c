#include<stdio.h>

int sum(int a, int b);
int diff(int a, int b);
int prod(int a, int b);
int quot(int a, int b);

int a,b;

int main(){
    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("Enter the second number:\n");
    scanf("%d", &b);
    printf("%d ", sum(a,b));
    printf("%d ", diff(a,b));
    printf("%d ", prod(a,b));
    if(b!=0){
        printf("%d ", quot(a,b));
    }
    else{
        printf("Cannot be divided by zero");
    }
    return 0;
}

int sum(int a, int b){
    int res = a+b;
    return res;
}

int diff(int a, int b){
    int res = a-b;
    return res;
}

int prod(int a, int b){
    int res = a*b;
    return res;
}

int quot(int a, int b){
    int res = a/b;
    return res;
}
