#include<stdio.h>
int main(){
    int ar1[] = {13, 23, 55, 67, 93};
    int ar2[] = {9, 24, 40, 68, 94};
    int n = sizeof(ar1)/sizeof(ar1[0]);
    int m = sizeof(ar2)/sizeof(ar2[0]);
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(ar1[i] < ar2[j]){
            printf("%d ", ar1[i]);
            i++;
        }
        else if(ar2[j] < ar1[i]){
            printf("%d ", ar2[j]);
            j++;
        }
    }
    while(i<n){
        printf("%d ", ar1[i]);
        i++;
    }
    while(j<m){
        printf("%d ", ar2[j]);
        j++;
    }
    return 0;
}