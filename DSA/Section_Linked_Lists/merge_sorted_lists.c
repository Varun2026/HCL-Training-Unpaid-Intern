#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertAtEnd(struct Node* head, int val) {
    struct Node* newNode = createNode(val);
    if (head == NULL) {
        return newNode;
    }
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct Node* merge(struct Node* a, struct Node* b) {
    if (a == NULL) return b;
    if (b == NULL) return a;
    if (a->data < b->data) {
        a->next = merge(a->next, b);
        return a;
    } else {
        b->next = merge(a, b->next);
        return b;
    }
}

int main() {
    struct Node* a = NULL;
    a = insertAtEnd(a, 1);
    a = insertAtEnd(a, 3);
    a = insertAtEnd(a, 5);
    struct Node* b = NULL;
    b = insertAtEnd(b, 2);
    b = insertAtEnd(b, 4);
    b = insertAtEnd(b, 6);
    struct Node* merged = merge(a, b);
    displayList(merged);
    return 0;
}