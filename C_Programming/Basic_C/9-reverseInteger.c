#include<stdio.h>
int main(){
    int rev = 0;
    int num = 0;
    printf("Enter a number to be reversed: ");
    scanf("%d", &num);
    while(num != 0){
        int rem = num % 10;
        rev = (rev*10)+rem;
        num = num / 10;
    }
    printf("%d", rev);
}