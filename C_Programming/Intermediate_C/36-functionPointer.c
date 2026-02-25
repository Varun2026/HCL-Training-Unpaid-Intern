#include<stdio.h>
float add(float a, float b){
    return a+b;
}

float subtract(float a, float b){
    return a-b;
}

float multiply(float a, float b){
    return a*b;
}

float divide(float a, float b){
    if(b == 0){
        printf("Cannot be divided by zero.\n");
        return 0;
    }
    return a/b;
}

int main(){
    float x, y;
    char sb;
    float (*operation[]) (float, float) = {add, subtract, multiply, divide};
    char symbols[] = {'+', '-', '*', '/'};
    printf("Enter the equation: \n");
    scanf("%f %c %f", &x, &sb, &y);
    int index = -1;
    for(int i=0; i<4; i++){
        if(symbols[i] == sb){
            index = i;
            break;
        }
    }
    if(index == -1){
        printf("Invalid symbol");
        return 0;
    }
    float result = operation[index](x, y);
    printf("%.2f", result);
}