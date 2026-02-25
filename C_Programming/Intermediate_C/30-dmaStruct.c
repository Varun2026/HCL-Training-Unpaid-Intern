#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int id;
    char name[20];
    int len;
}Object;



void add(Object *o, int *cnt, int size){
    if(*cnt >=size){
        printf("array of structure is full");
        return;
    }
    while(*cnt < size){
        printf("Enter the object id: \n");
        scanf("%d", &o[*cnt].id);

        printf("Enter the object name: \n");
        scanf("%s", o[*cnt].name);

        printf("Enter the length of the obejct: \n");
        scanf("%d", &o[*cnt].len);

        (*cnt)++;   
    }
}

void delete(Object *o, int *cnt, int id){
    int index =-1;
    for(int i=0; i<*cnt; i++){
        if(o[i].id == id){
            index = i;
            break;
        }
    }
    if(index == -1){
        printf("No object found to delete\n");
        return;
    }

    for(int i= index; i<*cnt -1; i++){
        o[i] = o[i+1];
    }
    (*cnt)--;
    printf("Item Deleted.\n");
}

void display(Object *arr, int *cnt){
    if(*cnt ==0){
        printf("No items to display");
        return;
    }
    for(int i=0; i<*cnt; i++){
        printf("Detail no. %d\n", (i+1));
        printf("%d \n", arr[i].id);
        printf("%s \n", arr[i].name);
        printf("%d \n", arr[i].len);
    }
}

int main(){
    int size;
    int choice;
    int count =0;
    int id = 0;

    // Object o[30];
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
        printf("Enter the id to be deleted: \n");
        scanf("%d", &id);
        delete(d1, &count, id);

        case 3:
        display(d1, &count);
    }
    return 0;
}
