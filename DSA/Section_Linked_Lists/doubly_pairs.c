#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
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
    newNode->prev = temp;
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

void findPairs(struct Node* head, int target) {
    if (head == NULL) return;
    struct Node* left = head;
    struct Node* right = head;
    while (right->next != NULL) {
        right = right->next;
    }
    while (left != right && left->prev != right) {
        int sum = left->data + right->data;
        if (sum == target) {
            printf("(%d, %d)\n", left->data, right->data);
            left = left->next;
            right = right->prev;
        } else if (sum < target) {
            left = left->next;
        } else {
            right = right->prev;
        }
    }
}

int main() {
    struct Node* head = NULL;
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 5);
    head = insertAtEnd(head, 6);
    int target = 7;
    findPairs(head, target);
    return 0;
}