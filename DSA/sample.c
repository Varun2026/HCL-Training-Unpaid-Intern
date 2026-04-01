#include<stdio.h>

void odd(int a);
void even(int b);
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    if(n<=0){
        printf("provide a positive number");
        return 0;
    }
    printf("%d ", n);

    if(n%2 != 0){
        odd(n);
    }
    else if(n%2 == 0){
        even(n);
    }
}
void odd(int a){
    a = (a*3) + 1;
    printf("%d ", a);
    if(a == 1){
        return;
    }
    if(a % 2 == 0){
        even(a);
    }
    else{
        odd(a);
    }
}

void even(int b){
    b = b/2;
    printf("%d ", b);
    if(b == 1){
        return;
    }
    if(b % 2 == 0){
        even(b);
    }
    else{
        odd(b);
    }
}

