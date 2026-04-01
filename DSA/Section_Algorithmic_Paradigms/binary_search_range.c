#include <stdio.h>

int findFirst(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int first = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            first = mid;
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

int findLast(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int last = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

int main() {
    int arr[] = {5,7,7,8,8,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    printf("[%d, %d]\n", findFirst(arr, n, target), findLast(arr, n, target));
    return 0;
}