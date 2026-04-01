#include <stdio.h>
#include <stdlib.h>

int* nextGreaterCircular(int arr[], int n) {
    int* result = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) result[i] = -1;
    int* stack = (int*)malloc(n * sizeof(int));
    int top = -1;
    for (int i = 0; i < 2 * n; i++) {
        int index = i % n;
        while (top != -1 && arr[stack[top]] < arr[index]) {
            result[stack[top]] = arr[index];
            top--;
        }
        if (i < n) stack[++top] = index;
    }
    free(stack);
    return result;
}

int main() {
    int arr[] = {1,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* result = nextGreaterCircular(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);
    return 0;
}