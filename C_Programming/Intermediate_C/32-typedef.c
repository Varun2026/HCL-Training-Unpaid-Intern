#include<stdio.h>
typedef struct{
    int rollno;
    char name[10];
    int marks;
}Student;

Student s[5];

int main(){
    printf("Enter all the student details:\n");
    for(int i=0; i<5; i++){
        printf("Enter the roll num of student %d: \n", (i+1));
        scanf("%d", &s[i].rollno);
        printf("Enter the name of student %d: \n", (i+1));
        scanf("%s", &s[i].name);
        printf("Enter the marks of student %d: \n", (i+1));
        scanf("%d", &s[i].marks);
    }

    int max = -1;
    int j=0;
    for(int i=0; i<5; i++){
        if(s[i].marks > max){
            max = s[i].marks;
            j = i;
        }
    }
    printf("The toppers details are:\n");
    printf("Roll number: %d\n", s[j].rollno);
    printf("Name: %s\n", s[j].name);
    printf("marks: %d\n", s[j]. marks);
    return 0;
}