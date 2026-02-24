#include<stdio.h>
#include<string.h>

int main(){
    char str[200];
    int length =0;
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    while(str[length] != '\n'){
        if(str[length] == '\0'){
            break;
        }
        length++;
    }
    printf("%d", length);
    return 0;
}