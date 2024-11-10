#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("Enter the number of words in the array: ");
    scanf("%d", &n);
    char wordList[n][100];
    for (int i = 0; i < n; ++i) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", wordList[i]);
    }
    char searchWord[100];
    printf("Enter the word to search: ");
    scanf("%s", searchWord);
    int isFound = 0;
    for (int i = 0; i < n; ++i) {
        if (strcmp(wordList[i], searchWord) == 0) {
            printf("Found '%s' at index %d\n", wordList[i], i);
            isFound = 1;
            break;  // Exit the loop after finding the word
        }
    }
    if (!isFound) {
        printf("'%s' not found in the list.\n", searchWord);
    }
    return 0;
}
