#include<stdio.h>

int celctofaren(int a);

int a;

int main(){
    printf("Enter the temperature in Celcius:\n");
    scanf("%d", &a);
    printf("%d ", celctofaren(a));
    return 0;
}

int celctofaren(int a){
    int f = (a * 9/5) + 32;
    return f;
}