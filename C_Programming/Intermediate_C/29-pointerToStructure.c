#include<stdio.h>
#include<string.h>

typedef struct{
    int rn;
    char name[20];
}Student;

void updatemarks(Student *stud, int rln, char nm[20]){
    stud->rn = rln;
    strcpy(stud->name, nm);
}

void printDetails(Student *stud){
    printf("Roll number: %d\n", stud->rn);
    printf("Name: %s\n", stud->name);
}

int main(){
    Student s1;
    // Student *s = &s1;
    updatemarks(&s1, 312, "Varun");
    printDetails(&s1);
    // int a = 10;
    // int *p = &a;
    // printf("%p", p);
    // printf("%d", *p);
    // printf("%p", &a);
    return 0;
}