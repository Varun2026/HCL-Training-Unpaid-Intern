#include <stdio.h>

double ternarySearch(int ropes[], int n, int k) {
    double low = 0, high = 1e9;
    for (int iter = 0; iter < 100; iter++) {
        double mid1 = low + (high - low) / 3;
        double mid2 = high - (high - low) / 3;
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++) {
            count1 += (int)(ropes[i] / mid1);
            count2 += (int)(ropes[i] / mid2);
        }
        if (count1 < k) {
            high = mid1;
        } else if (count2 < k) {
            low = mid1;
            high = mid2;
        } else {
            low = mid2;
        }
    }
    return low;
}

int main() {
    int ropes[] = {10, 15, 20};
    int n = sizeof(ropes) / sizeof(ropes[0]);
    int k = 5;
    double maxLen = ternarySearch(ropes, n, k);
    printf("%.2f\n", maxLen);
    return 0;
}