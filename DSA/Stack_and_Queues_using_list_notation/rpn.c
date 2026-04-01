#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isFull();
void rpn(char s);
int top = -1;

char *stack;
int size=0;

int main(){
    printf("Enter the size of the stack:\n");
    scanf("%d", &size);
    if(size <= 0){
        printf("Give size more than 0\n");
        return 0;
    }
    if(size%2 != 0){
        printf("Operation cannot be done....exiting.\n");
        return 0;
    }
    stack = malloc(size * sizeof(char));

    printf("Start entering the values:\n");
    for(int i=0; i<size; i++){
        if(!isFull()){
            char s;
            scanf(" %c", &s);
            rpn(s);
        }
    }
    return 0;
}

bool isFull(){
    if(top == size-1){
        return true;
    }else{
        return false;
    }
}

void brackets(char s){
    if(s == '(' || s == '[' || s == '{'){
        stack[++top] = s;
    }
    else{
        if(top == -1){
            printf("Not balanced\n");
            return;
        }
        char ele = stack[top--];
        if(!(s == ')' && ele == '(' || s == ']' && ele == '[' || s == '}' && ele == '{')){
            printf("Not balanced");
            return;
        }
    }
}