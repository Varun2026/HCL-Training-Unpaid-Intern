#include<stdio.h>
#include<string.h>

int main(){
    char str[200];
    int i=0;
    int j=0;
    char ch;

    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character :\n");
    scanf("%c", &ch);

    while(str[i] != '\n'){
        if(str[i] != ch){
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    printf("Result: %s", str);
    return 0;
}