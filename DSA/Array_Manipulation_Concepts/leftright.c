#include <stdio.h>
#include<string.h>
void left(int pos, int n, int arr[]){
    pos = pos%n;
    for(int i=0; i<pos; i++){
        int temp = arr[0];
        for(int j=1; j<n; j++){
            arr[j-1] = arr[j];
        }
        arr[n-1] = temp;
    }
}

void right(int pos, int n, int arr[]){
    pos = pos %n;
    for(int i=0; i<pos; i++){
        int temp = arr[n-1];
        for(int j=n-2; j>=0; j--){
            arr[j+1] = arr[j];
        }
        arr[0] = temp;
    }
}

int main() {
    int pos;
    int n;
    char shift[10];
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    if(n<=0){
        return 0;
    }
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Left shift or Right shift: ");
    scanf("%s", &shift);
    printf("Enter the number of positions to shift: ");
    scanf("%d", &pos);
    if(strcmp(shift, "left")) left(pos, n, arr);
    else if(strcmp(shift,"right")) right(pos, n, arr);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}