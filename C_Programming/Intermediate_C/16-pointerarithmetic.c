#include<stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    
    printf("Address stored in arr: %p\n", arr);
    printf("Address of first element &arr[0]: %p\n", &arr[0]);
    printf("Address stored in ptr: %p\n\n", ptr);

    printf("Value at first element using *ptr: %d\n", *(ptr+1));
    printf("Value at arr[0]: %d\n\n", arr[0]);

    int res;
    for(int i=0; i<5; i++){
        res = res + *ptr;
        ptr++;
    }
    printf("%d ", res/5);
    return 0;
}