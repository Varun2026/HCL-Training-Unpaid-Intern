#include<stdio.h>
#include<stdbool.h>
#define MAX 5
//macros

bool isEmpty();
bool isFull();
void enqueue(int ele);
void dequeue();
void display();

int queue[MAX];
int front = -1;
int rear =-1;

int main(){
    int choice =0;
    int ele =0;
    do{
        printf("Choose any one - 1.Empty 2.Full 3.Enqueue 4.dequeue 5.Display 0.Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            if(isEmpty()){
                printf("Yes the queue is Empty\n");
            }
            else{
                printf("No the queue is not empty\n");
            }
            break;
            
            case 2:
            if(isFull()){
                printf("Yes the queue is full\n");
            }
            else{
                printf("No the queue is not ful\n");
            }
            break;

            case 3:
            printf("Enter the element to enqueue:\n");
            scanf("%d", &ele);
            if(!isFull()){
                enqueue(ele);
            }
            else{
                printf("Cannot be added, queue is full!\n");
            }
            break;

            case 4:
            if(!isEmpty()){
                dequeue();
                printf("Element removed successfully!\n");
            }
            else{
                printf("Queue is Empty, cannot dequeue!\n");
            }
            break;

            case 5:
            if(!isEmpty()){
                display();
                printf("Queue displayed successfully\n");
            }
            else{
                printf("No elements to display\n");
            }
            break;

            case 0:
            printf("Exiting the queue....!\n");
            break;

            default:
            printf("Invalid option choosen\n");
            break;

        }
    }while(choice !=0);
    return 0;
}

bool isEmpty(){
    if(front == -1 && rear == -1){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
    if((rear-front) == MAX-1){
        return true;
    }
    else{
        return false;
    }
}

void enqueue(int a){
    if(front == -1 && rear == -1){
        queue[0] = a;
        front = front + 1;
        rear = rear + 1;
    }
    else if(rear < MAX-1){
        queue[rear+1] = a;
        rear = rear + 1;
    }
}

void dequeue(){
    if(front < rear){
        front++;
        
    }
    else if(front == rear){
        front = -1;
        rear = -1;
    }
}

void display(){
    for(int i=front; i<=rear; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}