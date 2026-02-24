#include<stdio.h>
int main(){
    puts("Hello");
    fputs("Hello\n", stdout);
    printf("Hello\n");
    putchar('A\n');
    fprintf(stdout, "Hello");
    return 0;
}