#include<stdio.h>

int len(char str[]) {
    int count = 0;
    while(str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int count = len(str);
    if (str[count - 1] == '\n') {
        str[count - 1] = '\0';  
    }
    for (int i = count - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n"); 
    return 0;
}
