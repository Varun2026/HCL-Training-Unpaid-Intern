#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool isFull();
bool isEmpty();
void enqueue(int ele);
void dequeue();
void peek();
void display();

int *cqueue;
int size;
int front = -1;
int rear = -1;

int main(){
    int choice, ele =0;
    do{
        printf("Enter the size of the cicular queue\n");
        scanf("%d", &size);
        cqueue = malloc(size * sizeof(int));
        if(cqueue == NULL){
            printf("Memory allocation failed");
            return 0;
        }

        printf("Choose any one - 1.Full 2.Empty 3.Enqueue 4.dequeue 5.Peek 6.Display 0.Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            if(isFull()){
                printf("The queue is full\n");
            }
            else{
                printf("The queue is not full.\n");
            }
            break;

            case 2:
            if(isEmpty()){
                printf("The queue is empty.\n");
            }
            else{
                printf("The queue is not empty.\n");
            }
            break;

            case 3:
            printf("Enter the element to add:\n");
            scanf("%d", &ele);
            if(!isFull() && !isEmpty()){
                enqueue(ele);
                printf("Enqueued sucessfully\n");
            }
            else{
                front = rear
                printf("Queue is full, cannot be added\n");
            }
            break;

            case 4:
            if(!isEmpty()){
                dequeue();
                printf("Element removed successfully");
            }
            else{
                printf("Element cannot be removed, queue is empty.\n");
            }
            break;

            case 5:
            if(!isEmpty()){
                peek();
                printf("Peeked the element successfully.\n");
            }
            else{
                printf("Queue is empty cannot be peeked.\n");
            }
            break;


            case 6:
            if(!isEmpty()){
                display();
                printf("Displayed all the elements successfully.\n");
            }
            else{
                printf("Cannot be dispalyed.\n");
            }
            break;

            case 0:
            printf("Exiting the queue...\n");
            break;

            default:
            printf("Choose a correct option");
            break;

        }
        free(cqueue);
    }while(choice !=0);
    return 0;
}

bool isFull(){
    if((rear+1)%size == front){
        rear = (rear + 1)%size;
        return true;
    }
    else{
        return false;
    }
}

bool isEmpty(){
    if(front == -1 && rear == -1){
        return true;
    }
    else{
        return false;
    }
}

void enqueue(int ele){
    if(isFull()){
        printf("Queue is full.\n");
        return;
    }
    if(isEmpty()){
        front = rear =0;
        cqueue[front] = ele;
    }
    else{
        rear = (rear + 1) % size;
        cqueue[rear] = ele;
    }
}