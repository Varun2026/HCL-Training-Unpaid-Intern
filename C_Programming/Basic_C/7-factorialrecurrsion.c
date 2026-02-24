#include<stdio.h>

long long fact(int n){
    if(n==0 || n == 1){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    int n;
    printf("Enter the number to check the factorial:\n");
    scanf("%d", &n);
    printf("%llu", fact(n));
    return 0;
}