#include <stdio.h>
int main() {
    char ch, encrypted, decrypted;
    int key;
    printf("Enter a character to encrypt: ");
    scanf(" %c", &ch);  // Space before %c to consume any newline character
    printf("Enter the encryption key (integer): ");
    scanf("%d", &key);
    encrypted = ch ^ key;
    printf("Encrypted character: %c\n", encrypted);
    decrypted = encrypted ^ key;
    printf("Decrypted character: %c\n", decrypted);
    return 0;
}
