//upper case ascii from 65 - 90 (A-Z)
//lower case ascii from 97 - 122(a-z)
#include<stdio.h>
#include<stdlib.h>

int main(){
    char str[200];
    // int size;
    // printf("Enter the size of string:\n");
    // scanf("%d", &size);
    // getchar();
    // str = malloc((size+1));
    // if(str == NULL){
    //     printf("memory allocation failed");
    //     return 1;
    // }

    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);

    int i=0;
    while(str[i] != '\0'){
        if(str[i] == '\n'){
            i++;
            continue;
        }
        if(str[i] >='A' && str[i] <= 'Z'){
            printf("%c", str[i]+32);
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            printf("%c", str[i] - 32);
        }
        else{
            printf("%c", str[i]);
        }
        i++;
    }
    // free(str);
    return 0;
}