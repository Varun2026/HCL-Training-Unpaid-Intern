#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int *data;
    int size;
    int capacity;
} Vector;

void init(Vector *v, int capacity){
    v->capacity = capacity;
    v->size = 0;
    v->data = (int*)malloc(capacity * sizeof(int));
}

void resize(Vector *v, int newCapacity){
    v->capacity = newCapacity;
    v->data = (int*)malloc(newCapacity*sizeof(int));
}

void push(Vector *v, int value){
    if(v->size == v->capacity){
        resize(v, v->capacity*2);
    }
    v->data[v->size] = value;
    v->size++;
}

int pop(Vector *v){
    if(v->size == 0){
        printf("Vector is empty\n");
        return -1;
    }
    v->size--;
    int value = v->data[v->size];
    if (v->size > 0 && v->size == v->capacity / 4) {
        resize(v, v->capacity / 2);
    }
    return value;
}

void printVector(Vector *v) {
    for (int i = 0; i < v->size; i++) {
        printf("%d ", v->data[i]);
    }
    printf("\n");
}

void freeVector(Vector *v) {
    free(v->data);
}

int main() {

    Vector v;
    initVector(&v, 2);

    push(&v, 10);
    push(&v, 20);
    push(&v, 30);
    push(&v, 40);

    printVector(&v);

    printf("Popped: %d\n", pop(&v));
    printVector(&v);

    freeVector(&v);

    return 0;
}