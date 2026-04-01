#include <stdio.h>
#include <string.h>

void compress(char* str) {
    int n = strlen(str);
    char result[1000];
    int index = 0;
    for (int i = 0; i < n; ) {
        char ch = str[i];
        int count = 0;
        while (i < n && str[i] == ch) {
            count++;
            i++;
        }
        result[index++] = ch;
        if (count > 1) {
            char countStr[10];
            sprintf(countStr, "%d", count);
            for (int j = 0; countStr[j] != '\0'; j++) {
                result[index++] = countStr[j];
            }
        }
    }
    result[index] = '\0';
    printf("%s\n", result);
}

int main() {
    char str[] = "aaabb";
    compress(str);
    return 0;
}