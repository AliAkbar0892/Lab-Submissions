#include <stdio.h>
#include <string.h>
void reversestring(char str[], int start, int end) {
    if (start >= end) { 
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reversestring(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);
    reversestring(str, 0, length - 1);
    printf("Reversed string: %s\n", str);
    return 0;
}
