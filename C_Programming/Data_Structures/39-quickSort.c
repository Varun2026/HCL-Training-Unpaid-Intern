#include <stdio.h>

void quickSort(int arr[], int low, int high) {
    if (low >= high)
        return;

    int i = low;
    int j = high;
    int pivot = arr[low];

    while (i < j) {

        while (arr[i] <= pivot && i < high)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    arr[low] = arr[j];
    arr[j] = pivot;

    quickSort(arr, low, j - 1);
    quickSort(arr, j + 1, high);
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
