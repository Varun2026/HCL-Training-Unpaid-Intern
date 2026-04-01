#include<stdio.h>
#include<string.h>
int main(){
    int arr[] = {1,2,2,0,0,1,1,0,2};
    int l = 0;
    int m = 0;
    int s = sizeof(arr)/sizeof(arr[0]);
    int h = (sizeof(arr)/sizeof(arr[0]))-1;
    while(m<=h){
        if(arr[m] == 0){
            int temp = arr[m];
            arr[m] = arr[l];
            arr[l] = temp;
            l++;
            m++;
        }
        if(arr[m] == 2){
            int temp = arr[m];
            arr[m] = arr[h];
            arr[h] = temp;
            h--;
            // m++;
        }
        if(arr[m] == 1){
            m++;
        }
    }
    for(int i=0; i<s; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}