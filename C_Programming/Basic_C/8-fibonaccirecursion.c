#include<stdio.h>
#include<stdbool.h>

int fibonacci(int);
int main(){
    int n;
    printf("Enter an number: \n");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        printf("%d ", fibonacci(i));
    return 0;
}

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}