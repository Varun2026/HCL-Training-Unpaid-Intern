#include<stdio.h>
 int main(){
    int arr[] = {7,1,5,3,6,4};

    int mini = 10;
    int maxi=0;
    for(int i=0; i<6; i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
        else if(arr[i] - mini > maxi){
            maxi = arr[i] - mini;
        }
    }
    printf("%d", maxi);
    return 0;

 }