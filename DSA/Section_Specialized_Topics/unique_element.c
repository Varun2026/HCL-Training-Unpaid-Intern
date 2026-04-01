#include <stdio.h>

int findUnique(int arr[], int n) {
    int xorSum = 0;
    for (int i = 0; i < n; i++) {
        xorSum ^= arr[i];
    }
    return xorSum;
}

int main() {
    int arr[] = {2, 3, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", findUnique(arr, n));
    return 0;
}