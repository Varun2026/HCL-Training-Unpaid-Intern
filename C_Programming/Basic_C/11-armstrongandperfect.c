#include<stdio.h>
#include<stdbool.h>

bool armstrong(int);
bool perfectnum(int);

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    if(armstrong(n)){
        printf("It is an armstrong number.\n");
    }
    else{
        printf("Not an armstrong number.\n");
    }

    if(perfectnum(n)){
        printf("It is an perfect number.\n");
    }
    else{
        printf("Not an perfect number.\n");
    }
}

bool armstrong(int n){
    int res =0;
    int cpy = n;
    while(n!=0){
        int rem = n%10;
        res = res + (rem*rem*rem);
        n = n/10;
    }
    if(res == cpy){
        return true;
    }
    else{
        return false;
    }
}

bool perfectnum(int n){
    int res = 0;
    int cpy = n;
    for(int i=1; i<n; i++){
        if(n%i == 0){
            res = res + i;
        }
    }
    if(res == cpy){
        return true;
    }
    else{
        return false;
    }
}
