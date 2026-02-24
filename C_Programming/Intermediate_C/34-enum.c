#include<stdio.h>

typedef enum {
    PENDING =0, 
    SHIPPED =1, 
    DELIVERED =2
}vals;

void displayStatus(vals);

int main(){
    vals status = PENDING;
    displayStatus(status);

    status = 1;
    displayStatus(status);

    status = 2;
    displayStatus(status);
    return 0;
}

void displayStatus(vals s){
    if(s == PENDING){
        printf("Order is pending\n");
    }
    else if(s == SHIPPED){
        printf("Order is shipped\n");
    }
    else if(s == DELIVERED){
        printf("Order is delivered\n");
    }
}

