#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swapPtoP(char *name, char *namee){
    char *temp = (char*)malloc(20 * sizeof(char));
    strcpy(temp, name);
    strcpy(name, namee);
    strcpy(namee, temp);

    printf("%s\n", name);
    printf("%s\n", namee);
}

int main(){
    char *name=(char*)malloc(20*sizeof(char));
    char *namee = (char*)malloc(20 * sizeof(char));
    //scanf("%s", &name); 
    //cannot do this because name is already a pointer to a memory.
    //using &name causes segmentation fault because &name is like giving address of the pointer again to the pointer itself
    printf("Enter a name:\n");
    scanf("%s", name);
    printf("Enter a second name: \n");
    scanf("%s", namee);

    printf("%s\n", name);
    printf("%s\n", namee);

    swapPtoP(name, namee);
}