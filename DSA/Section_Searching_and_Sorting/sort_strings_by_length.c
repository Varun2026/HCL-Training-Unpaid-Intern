#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    char* str1 = *(char**)a;
    char* str2 = *(char**)b;
    return strlen(str1) - strlen(str2);
}

int main() {
    char* strings[] = {"apple", "ban", "cherry", "date"};
    int n = sizeof(strings) / sizeof(strings[0]);
    qsort(strings, n, sizeof(char*), compare);
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }
    return 0;
}