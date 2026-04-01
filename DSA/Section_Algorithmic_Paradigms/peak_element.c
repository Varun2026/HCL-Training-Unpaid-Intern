#include <stdio.h>

int findPeak(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

int main() {
    int arr[] = {1,2,3,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int peak = findPeak(arr, n);
    printf("%d\n", arr[peak]);
    return 0;
}