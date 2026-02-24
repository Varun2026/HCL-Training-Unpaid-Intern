#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char name[20];
    int len;
}Object;

void add(Object *o, int *cnt, int size){
    if(*cnt >=size){
        printf("array of structure is full");
        return;
    }
    while(*cnt <)
}

int main(){
    int size;
    int choice;
    int count =0;
    printf("Enter the size of the object: \n");
    scanf("%d", &size);


    Object *d1 = (Object*) malloc(size * sizeof(Object));

    printf("Enter the option: \n 1. Add objects \n 2. delete objects \n 3. Display Objects \n 4. Exit\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        add(d1, &count, size);
        break;

        case 2:
        delete()
    }
}