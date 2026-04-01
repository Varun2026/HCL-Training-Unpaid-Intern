#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool containsPattern(char* text, char* pattern) {
    int n = strlen(text);
    int m = strlen(pattern);
    for (int i = 0; i <= n - m; i++) {
        bool match = true;
        for (int j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}

int main() {
    char text[] = "hello world";
    char pattern[] = "world";
    if (containsPattern(text, pattern)) {
        printf("Found\n");
    } else {
        printf("Not found\n");
    }
    return 0;
}