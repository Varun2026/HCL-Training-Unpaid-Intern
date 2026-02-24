#include<stdio.h>
#include<stdbool.h>

bool isPrime(int);

int main(){
    int n;
    printf("Enter the number to check if it is prime:\n");
    scanf("%d", &n);
    if(isPrime(n)){
        printf("It is a Prime number.\n");
    }
    else{
        printf("It is not a prime number.\n");
    }
    return 0;
}

bool isPrime(int n){
    int n1 = n;
    if(n1<=1){
        return false;
    }
    else{
        for(int i=2; i<=sqrt(n1); i++){
            if(n%i == 0){
                return false;
            }
            else{
                return true;
            }
        }
    }
}

