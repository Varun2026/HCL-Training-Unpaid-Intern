#include<stdio.h>
#include<stdbool.h>

int main(){
    int arr[] = {4, 5, 7, 9, 10, 12, 2, 1};
    int k = 10;
    int res = 0;
    bool flag = false;
    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        if(arr[i] == k){
            res = arr[i];
            flag = true;
            break;
        }
    }
    if(flag){
        printf("Element: %d\n", res);
        printf("Element found");
    }
    else{
        printf("Element not found");
    }
    return 0;
}