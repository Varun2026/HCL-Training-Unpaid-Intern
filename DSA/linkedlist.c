#include<stdio.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* createNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    (*newNode).next = NULL;
    return newNode;
}

struct Node* insertAtBeginning(struct Node* head, int value){
    struct Node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
    return head;
}

struct Node* insertAtEnd(struct Node* head, int val){
    struct Node* newNode = createNode(val);
    if(head == NULL){
        return newNode;
    }
    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

struct Node* displayList(struct Node* head){
    if(head == NULL){
        printf("Cannot display list.");
        return;
    }
    struct Node* temp = head;
    while(temp->next != NULL){
        printf("%d", temp->data);
        printf("->");
    }
    return head;
}

int main(){
    struct Node* head = NULL;
    head = insertAtBeginning(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);
    head = insertAtEnd(head, 50);
    displayList(head);
    return 0;
}
