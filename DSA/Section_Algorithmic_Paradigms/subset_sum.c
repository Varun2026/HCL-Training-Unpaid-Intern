#include <stdio.h>
#include <stdbool.h>

bool subsetSum(int arr[], int n, int target) {
    if (target == 0) return true;
    if (n == 0) return false;
    if (arr[n-1] > target) return subsetSum(arr, n-1, target);
    return subsetSum(arr, n-1, target) || subsetSum(arr, n-1, target - arr[n-1]);
}

int main() {
    int arr[] = {3, 34, 4, 12, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    if (subsetSum(arr, n, target)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}