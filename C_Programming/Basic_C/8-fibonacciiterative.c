#include<stdio.h>
#include<stdbool.h>

void fibonacci(int);
int main(){
    int n;
    printf("Enter an number: \n");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

void fibonacci(int n){
    int a =0;
    int b =1;
    if(n == 1){
        printf("%d ", a);
    }
    if(n == 2){
        printf("%d ", b);
    }
    if(n >= 2){
        printf("%d ", a);
        printf("%d ", b);
        int res = a + b;
        while(res <=n){
            printf("%d ", res);
            a = b;
            b = res;
            res = a+b;
        }
    }
}