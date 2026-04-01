#include <stdio.h>
#include <stdlib.h>

int* stockSpan(int prices[], int n) {
    int* span = (int*)malloc(n * sizeof(int));
    int* stack = (int*)malloc(n * sizeof(int));
    int top = -1;
    for (int i = 0; i < n; i++) {
        while (top != -1 && prices[stack[top]] <= prices[i]) {
            top--;
        }
        span[i] = (top == -1) ? (i + 1) : (i - stack[top]);
        stack[++top] = i;
    }
    free(stack);
    return span;
}

int main() {
    int prices[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(prices) / sizeof(prices[0]);
    int* span = stockSpan(prices, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", span[i]);
    }
    printf("\n");
    free(span);
    return 0;
}