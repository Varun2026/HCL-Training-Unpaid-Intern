#include<stdio.h>

int main(){
    int n;
    printf("Enter the number to check the factorial:\n");
    scanf("%d", &n);
    unsigned long long res =1;
    for(int i=1; i<=n; i++){
        res = res * i;
    }
    printf("%llu", res);
    return 0;
}