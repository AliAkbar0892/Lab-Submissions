#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[50];
    int publicationYear;
};

struct Library {
    struct Book *books;
    int numBooks;
};

int main() {
    struct Library *library = (struct Library*)malloc(sizeof(struct Library));
    
    if (library == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    library->numBooks = 5;
    library->books = (struct Book*)malloc(library->numBooks * sizeof(struct Book));

    if (library->books == NULL) {
        printf("Memory allocation failed\n");
        free(library);
        return 1;
    }

    for (int i = 0; i < library->numBooks; i++) {
        printf("Enter details for Book %d\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]s", library->books[i].title);
        printf("Author: ");
        scanf(" %[^\n]s", library->books[i].author);
        printf("Publication Year: ");
        scanf("%d", &library->books[i].publicationYear);
    }

    printf("\nBooks published after the year 2000:\n");
    for (int i = 0; i < library->numBooks; i++) {
        if (library->books[i].publicationYear > 2000) {
            printf("Title: %s\n", library->books[i].title);
        }
    }

    free(library->books);
    free(library);

    return 0;
}
