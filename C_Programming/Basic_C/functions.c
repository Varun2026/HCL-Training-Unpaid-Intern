#include<stdio.h>

float simpleinterest(int, int, int);

int p, n, r;
int main(){
    printf("Enter the principle amount:\n");
    scanf("%d", &p);
    printf("Enter the years:\n");
    scanf("%d", &n);
    printf("Enter the rate:\n");
    scanf("%d", &r);

    printf("%.2f", simpleinterest(p, n, r));
    return 0;
}

float simpleinterest(int p, int n, int r){
    float res = (p*n*r)/100;
    return res;
}