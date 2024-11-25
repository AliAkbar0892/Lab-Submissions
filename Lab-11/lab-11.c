#include <stdio.h>
#include <string.h>

// Define the structures
struct player {
    char name[20];
    char team[20];
};

struct bowl {
    char type[10]; // seamer, pacer, spinner, or N/A
    char arm[5];   // left or right
    struct player ply;
};

struct bat {
    char type[10];  // top order, middle order, lower order
    char handed[8]; // lefty or righty
    struct bowl ply2;
};

// Function prototypes
void createPlayer(struct bat players[], int count);
void readPlayers(struct bat players[], int count);
void updatePlayer(struct bat players[], int count);
void deletePlayer(struct bat players[], int *count);

int main() {
    struct bat players[5]; // Array for 5 players
    int count = 0;         // Keeps track of players stored
    int choice;

    do {
        printf("\n--- CRUD Operations Menu ---\n");
        printf("1. Create Player\n");
        printf("2. Read Players\n");
        printf("3. Update Player\n");
        printf("4. Delete Player\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 5)
                    createPlayer(players, count++);
                else
                    printf("Player list is full!\n");
                break;
            case 2:
                readPlayers(players, count);
                break;
            case 3:
                updatePlayer(players, count);
                break;
            case 4:
                deletePlayer(players, &count);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

// Create a new player
void createPlayer(struct bat players[], int count) {
    printf("\nEnter details for player %d:\n", count + 1);
    printf("Player name: ");
    scanf("%s", players[count].ply2.ply.name);
    printf("Player team: ");
    scanf("%s", players[count].ply2.ply.team);
    printf("Bowler type (seamer, pacer, spinner, N/A): ");
    scanf("%s", players[count].ply2.type);
    printf("Bowling arm (left or right): ");
    scanf("%s", players[count].ply2.arm);
    printf("Batsman type (top order, middle order, lower order): ");
    scanf("%s", players[count].type);
    printf("Batting handedness (lefty or righty): ");
    scanf("%s", players[count].handed);
    printf("Player added successfully!\n");
}

// Read all players
void readPlayers(struct bat players[], int count) {
    if (count == 0) {
        printf("\nNo players to display.\n");
        return;
    }

    printf("\n--- Player List ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("Name: %s\n", players[i].ply2.ply.name);
        printf("Team: %s\n", players[i].ply2.ply.team);
        printf("Bowler Type: %s\n", players[i].ply2.type);
        printf("Bowling Arm: %s\n", players[i].ply2.arm);
        printf("Batsman Type: %s\n", players[i].type);
        printf("Batting Handedness: %s\n", players[i].handed);
    }
}

// Update player details
void updatePlayer(struct bat players[], int count) {
    if (count == 0) {
        printf("\nNo players to update.\n");
        return;
    }

    int index;
    printf("\nEnter the player number to update (1 to %d): ", count);
    scanf("%d", &index);
    index--; // Adjust for 0-based indexing

    if (index >= 0 && index < count) {
        printf("Enter new details for player %d:\n", index + 1);
        printf("Player name: ");
        scanf("%s", players[index].ply2.ply.name);
        printf("Player team: ");
        scanf("%s", players[index].ply2.ply.team);
        printf("Bowler type (seamer, pacer, spinner, N/A): ");
        scanf("%s", players[index].ply2.type);
        printf("Bowling arm (left or right): ");
        scanf("%s", players[index].ply2.arm);
        printf("Batsman type (top order, middle order, lower order): ");
        scanf("%s", players[index].type);
        printf("Batting handedness (lefty or righty): ");
        scanf("%s", players[index].handed);
        printf("Player updated successfully!\n");
    } else {
        printf("Invalid player number!\n");
    }
}

// Delete a player
void deletePlayer(struct bat players[], int *count) {
    if (*count == 0) {
        printf("\nNo players to delete.\n");
        return;
    }

    int index;
    printf("\nEnter the player number to delete (1 to %d): ", *count);
    scanf("%d", &index);
    index--; // Adjust for 0-based indexing

    if (index >= 0 && index < *count) {
        for (int i = index; i < *count - 1; i++) {
            players[i] = players[i + 1];
        }
        (*count)--; // Reduce player count
        printf("Player deleted successfully!\n");
    } else {
        printf("Invalid player number!\n");
    }
}
