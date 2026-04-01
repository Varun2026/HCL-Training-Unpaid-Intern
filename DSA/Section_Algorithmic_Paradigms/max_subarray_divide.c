#include <stdio.h>
#include <limits.h>

int max(int a, int b) { return a > b ? a : b; }

int maxCrossingSum(int arr[], int l, int m, int h) {
    int sum = 0;
    int leftSum = INT_MIN;
    for (int i = m; i >= l; i--) {
        sum += arr[i];
        if (sum > leftSum) leftSum = sum;
    }
    sum = 0;
    int rightSum = INT_MIN;
    for (int i = m + 1; i <= h; i++) {
        sum += arr[i];
        if (sum > rightSum) rightSum = sum;
    }
    return leftSum + rightSum;
}

int maxSubarraySum(int arr[], int l, int h) {
    if (l == h) return arr[l];
    int m = (l + h) / 2;
    return max(max(maxSubarraySum(arr, l, m), maxSubarraySum(arr, m+1, h)), maxCrossingSum(arr, l, m, h));
}

int main() {
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", maxSubarraySum(arr, 0, n-1));
    return 0;
}