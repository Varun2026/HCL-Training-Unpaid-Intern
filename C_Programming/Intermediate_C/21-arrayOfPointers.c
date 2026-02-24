#include<stdio.h>

int add(int a, int b){
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}

int multiply(int a, int b){
    return a*b;
}

int divide(int a, int b){
    if(b == 0){
        printf("Division by zero error.\n");
        return 0;
    }
    return a/b;
}

int main(){
    int (*operations[]) (int, int) = {add, subtract, multiply, divide};
    int ch, x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    if(ch > 1 || ch < 4){
        printf("Invalid choice");
        return 0;
    }

    int result = operations[ch -1](x, y);
    printf("Result: %d\n", result);
    return 0;
}