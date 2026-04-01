#include<stdio.h>
 int main(){
    int arr[] = {7,1,5,3,6,4};
    int k=3;
    int n=6;
    int maxi=0;
    int sum =0;
    for(int i=0; i<k;i++){
        sum  = sum + arr[i];
    }
    maxi = sum;
    for(int i=0; i<n-k; i++){
        sum = sum-arr[i]+arr[i+k];
        if(maxi < sum){
            maxi = sum;
        }
    }
    printf("%d", maxi);
    return 0;
 }