#include <stdio.h>
#include <string.h>

struct TravelPackage {
    char name[50];
    char destination[50];
    int duration;      
    float cost;       
    int seatsAvailable;
};

void displayPackages(struct TravelPackage packages[], int size) {
    printf("Available Travel Packages:\n");
    printf("-------------------------------------------------------------\n");
    printf("%-20s %-15s %-10s %-10s %-10s\n", "Package Name", "Destination", "Duration", "Cost", "Seats");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < size; i++) {
        if (packages[i].seatsAvailable > 0) {
            printf("%-20s %-15s %-10d $%-9.2f %-10d\n", 
                   packages[i].name, 
                   packages[i].destination, 
                   packages[i].duration, 
                   packages[i].cost, 
                   packages[i].seatsAvailable);
        }
    }
    printf("-------------------------------------------------------------\n");
}

void bookPackage(struct TravelPackage packages[], int size) {
    char packageName[50];
    printf("Enter the name of the package to book: ");
    scanf(" %[^\n]", packageName);

    for (int i = 0; i < size; i++) {
        if (strcmp(packages[i].name, packageName) == 0) {
            if (packages[i].seatsAvailable > 0) {
                packages[i].seatsAvailable--;
                printf("Booking successful! Remaining seats: %d\n", packages[i].seatsAvailable);
                return;
            } else {
                printf("Sorry, no seats available for this package.\n");
                return;
            }
        }
    }
    printf("Package not found.\n");
}

int main() {
    struct TravelPackage packages[] = {
        {"Tropical Paradise", "Maldives", 7, 1500.00, 10},
        {"Cultural Escape", "Japan", 10, 2200.00, 5},
        {"Adventure Trails", "Nepal", 5, 800.00, 15},
        {"European Delight", "France", 12, 3000.00, 7},
        {"Desert Safari", "Dubai", 4, 500.00, 20}
    };
    int size = sizeof(packages) / sizeof(packages[0]);
    int choice;
    do {
        printf("\nTravel Package Management\n");
        printf("1. Display available packages\n");
        printf("2. Book a package\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                displayPackages(packages, size);
                break;
            case 2:
                bookPackage(packages, size);
                break;
            case 3:
                printf("Thank you for using the Travel Package Management System!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
