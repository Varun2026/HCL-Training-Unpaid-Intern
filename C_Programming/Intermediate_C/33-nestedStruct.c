#include<stdio.h>
typedef struct{
    char itemName[100];
    int iNum;
    float weight;
}Item;

typedef struct{
    char name[50];
    int age;
    char gender[10];
    char address[200];
}Customer;

typedef struct{
    Customer c;
    Item i;
    char status[10];
    int timed;
}Order;

int main(){
    Order o1;
    printf("Enter the order details: \n");
    printf("Enter the Customer details: \n");
    printf("Enter the Name: \n");
    scanf("%s", &o1.c.name);
    printf("Enter the age: \n");
    scanf("%d", &o1.c.age);
    printf("Enter the gender: \n");
    scanf("%s", &o1.c.gender);
    printf("Enter the address: \n");
    scanf("%s", &o1.c.address);

    printf("Enter the item details: \n");
    printf("Enter the Item Name: \n");
    scanf("%s", &o1.i.itemName);
    printf("Enter the Item Number: \n");
    scanf("%d", &o1.i.iNum);
    printf("Enter the item weight: \n");
    scanf("%f", &o1.i.weight);

    printf("The order details are: \n");
    printf("Customer Name is: \n");
    printf("%s\n", o1.c.name);
    printf("Customer age: \n");
    printf("%d\n", o1.c.age);
    printf("Customer gender: \n");
    printf("%s\n", o1.c.gender);
    printf("Customer address: \n");
    printf("%s\n", o1.c.address);

    printf("The item details are: \n");
    printf("The Item Name is: \n");
    printf("%s\n", o1.i.itemName);
    printf("The Item Number is: \n");
    printf("%d\n", o1.i.iNum);
    printf("The item weight is: \n");
    printf("%.2f\n", o1.i.weight);
}