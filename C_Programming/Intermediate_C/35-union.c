#include<stdio.h>
#include<stdlib.h>

typedef union{
    int id;
    float val;
    char name[20];
}Data;

typedef struct{
    int v;
    float i;
    char n[20];
}Details;

int main(){
    Data d1;
    Details d2;
    printf("%d \n", sizeof(d1));
    printf("%d \n", sizeof(d2));
    return 0;
}