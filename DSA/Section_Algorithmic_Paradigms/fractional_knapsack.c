#include <stdio.h>
#include <stdlib.h>

struct Item {
    int value, weight;
};

int compare(const void* a, const void* b) {
    struct Item* i1 = (struct Item*)a;
    struct Item* i2 = (struct Item*)b;
    double r1 = (double)i1->value / i1->weight;
    double r2 = (double)i2->value / i2->weight;
    if (r1 > r2) return -1;
    return 1;
}

double fractionalKnapsack(int W, struct Item arr[], int n) {
    qsort(arr, n, sizeof(arr[0]), compare);
    double totalValue = 0;
    for (int i = 0; i < n; i++) {
        if (W >= arr[i].weight) {
            totalValue += arr[i].value;
            W -= arr[i].weight;
        } else {
            totalValue += arr[i].value * ((double)W / arr[i].weight);
            break;
        }
    }
    return totalValue;
}

int main() {
    struct Item arr[] = {{60,10}, {100,20}, {120,30}};
    int n = sizeof(arr) / sizeof(arr[0]);
    int W = 50;
    printf("%.2f\n", fractionalKnapsack(W, arr, n));
    return 0;
}