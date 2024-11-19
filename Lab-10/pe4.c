#include <stdio.h>
#include <string.h>

#define MAX_CARS 100

struct Car {
    char make[50];
    char model[50];
    int year;
    double price;
    int mileage;
};

void addcar(struct Car cars[], int *count);
void displaycars(struct Car cars[], int count);
void searchcars(struct Car cars[], int count, char keyword[]);

int main() {
    struct Car cars[MAX_CARS];
    int count = 0;
    int choice;

    do {
        printf("\nCar Dealership Management System\n");
        printf("1. Add a new car\n");
        printf("2. Display all cars\n");
        printf("3. Search cars by make or model\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addcar(cars, &count);
                break;
            case 2:
                displaycars(cars, count);
                break;
            case 3: {
                char keyword[50];
                printf("Enter make or model to search: ");
                scanf("%s", keyword);
                searchcars(cars, count, keyword);
                break;
            }
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void addcar(struct Car cars[], int *count) {
    if (*count >= MAX_CARS) {
        printf("Cannot add more cars. Dealership is full.\n");
        return;
    }

    struct Car newcar;

    printf("Enter car make: ");
    scanf("%s", newcar.make);
    printf("Enter car model: ");
    scanf("%s", newcar.model);
    printf("Enter car year: ");
    scanf("%d", &newcar.year);
    printf("Enter car price: ");
    scanf("%lf", &newcar.price);
    printf("Enter car mileage: ");
    scanf("%d", &newcar.mileage);

    cars[*count] = newcar;
    (*count)++;
    printf("Car added successfully!\n");
}

void displaycars(struct Car cars[], int count) {
    if (count == 0) {
        printf("No cars available in the dealership.\n");
        return;
    }

    printf("\nList of available cars:\n");
    for (int i = 0; i < count; i++) {
        printf("Car %d:\n", i + 1);
        printf("Make: %s\n", cars[i].make);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: $%.2lf\n", cars[i].price);
        printf("Mileage: %d km\n", cars[i].mileage);
        printf("------------------------\n");
    }
}

void searchcars(struct Car cars[], int count, char keyword[]) {
    int found = 0;

    printf("\nSearch results for \"%s\":\n", keyword);
    for (int i = 0; i < count; i++) {
        if (strstr(cars[i].make, keyword) != NULL || strstr(cars[i].model, keyword) != NULL) {
            printf("Car %d:\n", i + 1);
            printf("Make: %s\n", cars[i].make);
            printf("Model: %s\n", cars[i].model);
            printf("Year: %d\n", cars[i].year);
            printf("Price: $%.2lf\n", cars[i].price);
            printf("Mileage: %d km\n", cars[i].mileage);
            printf("------------------------\n");
            found = 1;
        }
    }

    if (!found) {
        printf("No cars found matching \"%s\".\n", keyword);
    }
}
