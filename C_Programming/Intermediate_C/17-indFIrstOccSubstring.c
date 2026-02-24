#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int firstOcc(char str[], char ch[]);

int main(){
    char arr[200];
    printf("Enter the string: \n");
    fgets(arr, sizeof(arr), stdin);
    
    char ch[200];
    printf("Enter the substring: \n");
    fgets(ch, sizeof(ch), stdin);

    printf("The index of the first occurence of this substring is: %d", firstOcc(arr, ch));
    return 0;
}

int firstOcc(char str[], char sub[]){
    int n = strlen(str);
    int m = strlen(sub);
    for(int i=0; i<=n-m; i++){
        int j=0;
        while(j<m && str[i+j] == sub[j]){
            j++;
        }
        if(j == m){
            return i;
        }
    }
    return -1;
}