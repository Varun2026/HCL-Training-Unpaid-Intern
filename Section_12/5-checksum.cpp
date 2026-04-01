#include <iostream>

int checksum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum ^= arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    std::cout << checksum(arr, 4) << std::endl;
    return 0;
}