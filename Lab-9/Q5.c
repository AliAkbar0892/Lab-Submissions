#include <stdio.h>
#include <string.h>

int customLength(char *word) {
    char *ptr = word;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - word;
}

void checkPalindrome(char *word) {
    int len = customLength(word);
    int isPalindrome = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("'%s' is a palindrome\n", word);
    } else {
        printf("'%s' is not a palindrome\n", word);
    }
}

int main() {
    int numWords;
    printf("Enter the number of words: ");
    scanf("%d", &numWords);
    char words[numWords][20];
    for (int i = 0; i < numWords; i++) {
        printf("Enter word[%d]: ", i + 1);
        scanf("%s", words[i]);
    }
    for (int i = 0; i < numWords; i++) {
        checkPalindrome(words[i]);
    }
    return 0;
}
