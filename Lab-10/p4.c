#include <stdio.h>
#include <string.h>
struct Movie {
    char title[100];
    char genre[50];
    char director[50];
    int releaseYear;
    float rating;
};
void addmovie(struct Movie movies[], int *movieCount) {
    printf("Enter movie title: ");
    getchar();  
    fgets(movies[*movieCount].title, sizeof(movies[*movieCount].title), stdin);
    movies[*movieCount].title[strcspn(movies[*movieCount].title, "\n")] = '\0'; 

    printf("Enter genre: ");
    fgets(movies[*movieCount].genre, sizeof(movies[*movieCount].genre), stdin);
    movies[*movieCount].genre[strcspn(movies[*movieCount].genre, "\n")] = '\0'; 

    printf("Enter director: ");
    fgets(movies[*movieCount].director, sizeof(movies[*movieCount].director), stdin);
    movies[*movieCount].director[strcspn(movies[*movieCount].director, "\n")] = '\0'; // Remove newline

    printf("Enter release year: ");
    scanf("%d", &movies[*movieCount].releaseYear);

    printf("Enter rating (0.0 to 10.0): ");
    scanf("%f", &movies[*movieCount].rating);

    (*movieCount)++;
    printf("Movie added successfully!\n");
}

void displayMovieDetails(struct Movie movie) {
    printf("Title: %s\n", movie.title);
    printf("Genre: %s\n", movie.genre);
    printf("Director: %s\n", movie.director);
    printf("Release Year: %d\n", movie.releaseYear);
    printf("Rating: %.1f\n", movie.rating);
    printf("---------------------------\n");
}

void searchByGenre(struct Movie movies[], int movieCount, char genre[]) {
    int found = 0;
    printf("\nMovies in the '%s' genre:\n", genre);
    for (int i = 0; i < movieCount; i++) {
        if (strcmp(movies[i].genre, genre) == 0) {
            displayMovieDetails(movies[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No movies found in this genre.\n");
    }
}

void displayAllMovies(struct Movie movies[], int movieCount) {
    if (movieCount == 0) {
        printf("No movies available.\n");
        return;
    }
    printf("\nAll Movie Details:\n");
    for (int i = 0; i < movieCount; i++) {
        displayMovieDetails(movies[i]);
    }
}

int main() {
    struct Movie movies[100]; 
    int movieCount = 0;    

    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Add a New Movie\n");
        printf("2. Search for Movies by Genre\n");
        printf("3. Display All Movies\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                // Add a new movie
                addmovie(movies, &movieCount);
                break;
            case 2: {
                // Search for movies by genre
                char genre[50];
                printf("Enter genre to search: ");
                getchar();  
                fgets(genre, sizeof(genre), stdin);
                genre[strcspn(genre, "\n")] = '\0'; 
                searchByGenre(movies, movieCount, genre);
                break;
            }
            case 3:
                displayAllMovies(movies, movieCount);
                break;
            case 4:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
