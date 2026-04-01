#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int n = 16;
    if (isPowerOfTwo(n)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}