#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

int main(){
    char *str;
    int size;
    printf("Enter the size of string: \n");
    scanf("%d", &size);
    getchar();
    str = malloc(size * sizeof(char));
    if(str == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter the string:\n");
    fgets(str, size, stdin);
    for(int i=0; str[i] != '\0'; i++){
        str[i] = tolower(str[i]);
    }

    int len = strlen(str);

    if(str[len-1] == '\n'){
        str[len-1] = '\0';
        len--;
    }

    int i=0;
    int j=len-1;

    bool flag = true;
    while(i<j){
        if(str[j] != str[i]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if(flag){
        printf("It is a palindrome");
    }else{
        printf("Not a palindrome");
    }
    free(str);
    return 0;
}