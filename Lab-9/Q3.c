#include <stdio.h>
#include <string.h>
int main() {
    char destination[100], source[100];
    int n;
    printf("Enter the destination string: ");
    fgets(destination, sizeof(destination), stdin);
    destination[strcspn(destination, "\n")] = 0; 
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = 0; 
    printf("Enter the number of characters to take from the source: ");
    scanf("%d", &n);
    int dest_len = strlen(destination);
    int i;
    for (i = 0; i < n && source[i] != '\0'; i++) {
        destination[dest_len + i] = source[i];
    }
    destination[dest_len + i] = '\0'; 
    printf("The concatenated string is: %s\n", destination);
    return 0;
}
