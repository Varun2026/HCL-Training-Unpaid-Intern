#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main() {
    int arr[] = {1,1,2,2,3,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int newLen = removeDuplicates(arr, n);
    printf("New length: %d\n", newLen);
    for (int i = 0; i < newLen; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}