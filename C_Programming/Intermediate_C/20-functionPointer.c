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
    int (*ops)(int, int);
    int ch, x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            ops = add;
            break;
        case 2:
            ops = subtract;
            break;
        case 3:
            ops = multiply;
            break;
        case 4:
            ops = divide;
            break;
        default:
            printf("Invalid choice...\n");
            return 0;
    }
    int res = ops(x, y);
    printf("Result is: %d\n", res);
    return 0;
}