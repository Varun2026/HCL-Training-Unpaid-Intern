#include <stdio.h>

int maxSum(int arr[], int n, int k) {
    int maxSum = 0;
    int currentSum = 0;
    for (int i = 0; i < k; i++) currentSum += arr[i];
    maxSum = currentSum;
    for (int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum) maxSum = currentSum;
    }
    return maxSum;
}

int main() {
    int arr[] = {1,4,2,10,2,3,1,0,20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    printf("%d\n", maxSum(arr, n, k));
    return 0;
}