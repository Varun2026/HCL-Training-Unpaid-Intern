#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 100
#define MAX_LEN 50

typedef struct {
    char word[MAX_LEN];
    int count;
} WordFreq;

int main() {

    char paragraph[500];
    WordFreq words[MAX_WORDS];
    int wordCount = 0;

    printf("Enter paragraph:\n");
    fgets(paragraph, sizeof(paragraph), stdin);

    char *token = strtok(paragraph, " ,.!?\n");

    while (token != NULL) {

        int found = 0;

        for (int i = 0; i < wordCount; i++) {
            if (strcmp(words[i].word, token) == 0) {
                words[i].count++;
                found = 1;
                break;
            }
        }

        if (!found && wordCount < MAX_WORDS) {
            strcpy(words[wordCount].word, token);
            words[wordCount].count = 1;
            wordCount++;
        }

        token = strtok(NULL, " ,.!?\n");
    }

    printf("\nWord Frequencies:\n");
    for (int i = 0; i < wordCount; i++) {
        printf("%s : %d\n", words[i].word, words[i].count);
    }

    return 0;
}