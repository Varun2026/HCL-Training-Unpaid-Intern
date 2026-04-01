#include <stdio.h>
#include <string.h>

void computePrefix(char* pattern, int m, int* prefix) {
    int len = 0;
    prefix[0] = 0;
    int i = 1;
    while (i < m) {
        if (pattern[i] == pattern[len]) {
            len++;
            prefix[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = prefix[len - 1];
            } else {
                prefix[i] = 0;
                i++;
            }
        }
    }
}

int main() {
    char pattern[] = "ababaca";
    int m = strlen(pattern);
    int prefix[m];
    computePrefix(pattern, m, prefix);
    for (int i = 0; i < m; i++) {
        printf("%d ", prefix[i]);
    }
    printf("\n");
    return 0;
}