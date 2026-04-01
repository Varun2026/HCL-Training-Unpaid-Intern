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

struct Node* insertAtEndCircular(struct Node* head, int val) {
    struct Node* newNode = createNode(val);
    if (head == NULL) {
        newNode->next = newNode;
        return newNode;
    }
    struct Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;
}

void displayCircular(struct Node* head) {
    if (head == NULL) return;
    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int getLength(struct Node* head) {
    if (head == NULL) return 0;
    struct Node* temp = head;
    int count = 1;
    while (temp->next != head) {
        count++;
        temp = temp->next;
    }
    return count;
}

void splitCircular(struct Node* head, struct Node** first, struct Node** second) {
    if (head == NULL) return;
    int len = getLength(head);
    int mid = len / 2;
    struct Node* temp = head;
    for (int i = 1; i < mid; i++) {
        temp = temp->next;
    }
    *first = head;
    *second = temp->next;
    temp->next = *first;
    struct Node* last = *second;
    while (last->next != head) {
        last = last->next;
    }
    last->next = *second;
}

int main() {
    struct Node* head = NULL;
    head = insertAtEndCircular(head, 1);
    head = insertAtEndCircular(head, 2);
    head = insertAtEndCircular(head, 3);
    head = insertAtEndCircular(head, 4);
    head = insertAtEndCircular(head, 5);
    struct Node* first = NULL;
    struct Node* second = NULL;
    splitCircular(head, &first, &second);
    printf("First half: ");
    displayCircular(first);
    printf("Second half: ");
    displayCircular(second);
    return 0;
}