#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int main(){
    FILE *fin, *fout;
    int arr[MAX];
    int n=0;

    fin = fopen("input.txt", "r");
    if (fin == NULL){
        printf("Cannot open the file.\n");
        return 1;
    }

    while(fscanf(fin, "%d", &arr[n]) == 1){
        n++;
        if(n >= MAX) break;
    }

    for(int i=0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Cannot open output file\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fout, "%d ", arr[i]);
    }

    fclose(fout);

    printf("Sorted numbers written to output.txt\n");

    return 0;
}