#include<stdio.h>
#include<stdbool.h>
#define MAX 5

bool isEmpty();
bool isFull();
void push(int e);
void pop();
void peek();
void display();

int top = -1;
int stack[MAX];

int main(){
    int a=0;
    int ele =0;

    do{
        printf("Choose any one - 1.Empty 2.Full 3.Push 4.Pop 5.peek 6.Display 0.Exit\n");
        scanf("%d", &a);
        switch(a){
            case 1:
            if(isEmpty()){
                printf("Yes the stack is empty\n");
            }
            else{
                printf("The stack is not empty\n");
            }
            break;

            case 2:
            if(isFull()){
                printf("Yes the stack is Full\n");
            }
            else{
                printf("The stack is not Full\n");
            }
            break;

            case 3:
            printf("Enter a value to push\n");
            scanf("%d", &ele);
            push(ele);
            break;

            case 4:
            pop();
            break;

            case 5:
            peek();
            break;

            case 6:
            display();
            break;

            case 0:
            printf("Exiting.....\n");
            break;

            default:
            printf("Not a correct option\n");
            break;
        }
    }while(a !=0);
    return 0;
}

bool isEmpty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}


bool isFull(){
    if(top == MAX-1){
        return true;
    }
    else{
        return false;
    }
}


void push(int ele){
    if(top == MAX-1){
        printf("Stack overflow\n");
    }
    else{
        top++;
        stack[top] = ele;
    }
}


void pop(){
    if(top == -1){
        printf("No element to pop!\n");
    }
    else{
        top = top-1;
        printf("Element popped\n");
    }
}


void peek(){
    if(top == -1){
        printf("No elements to peek!\n");
    }
    else{
        printf("%d ", stack[top]);
        printf("Element peeked successfully\n");
    }
}

void display(){
    for(int i=0; i<=top; i++){
        printf("%d ", stack[i]);
    }
}