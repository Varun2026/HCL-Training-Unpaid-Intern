#include<stdio.h>
#include<stdbool.h>
#define MAX 30

bool isBalanced(char exp[]){
    char stack[MAX];
    int top = -1;

    for(int i = 0; exp[i] != '\0'; i++) {

        char ch = exp[i];

        if(ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        }

        else if(ch == ')' || ch == '}' || ch == ']') {

            if(top == -1)
                return false;

            char open = stack[top--];

            if((ch == ')' && open != '(') ||
               (ch == '}' && open != '{') ||
               (ch == ']' && open != '[')) {
                return false;
            }
        }
    }
    return (top == -1);
}

int main(){
    char expr[100];

    printf("Enter expression: ");
    scanf("%s", expr);

    if(isBalanced(expr))
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}