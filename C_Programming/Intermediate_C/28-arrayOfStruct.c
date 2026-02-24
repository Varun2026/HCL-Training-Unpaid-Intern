#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int id;
    char name[10];
    float salary;
}Employee;

Employee e[10];

int main(){
    printf("Enter all the employee details:\n");
    float total = 0.0;
    for(int i=0; i<10; i++){
        printf("Enter the id of the employee %d: \n", (i+1));
        scanf("%d", &e[i].id);
        printf("Enter the name of employee %d: \n", (i+1));
        scanf("%s", &e[i].name);
        printf("Enter the salary of the employee %d: \n", (i+1));
        scanf("%f", &e[i].salary);
        total = total + e[i].salary;
    }

    float max = 0;
    int j=0;
    for(int i=0; i<10; i++){
        if(e[i].salary > max){
            max = e[i].salary;
            j = i;
        }
    }
    printf("The details are:\n");
    printf("ID number: %d\n", e[j].id);
    printf("Name: %s\n", e[j].name);
    printf("Salary: %.2f\n", e[j].salary);
    return 0;
}