#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }

int longestSubarray(int arr[], int n, int k) {
    int left = 0;
    int sum = 0;
    int maxLen = 0;
    for (int right = 0; right < n; right++) {
        sum += arr[right];
        while (sum > k && left <= right) {
            sum -= arr[left];
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 11;
    printf("%d\n", longestSubarray(arr, n, k));
    return 0;
}