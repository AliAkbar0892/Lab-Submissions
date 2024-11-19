#include <stdio.h>
#include <string.h>
struct Flight {
    int flightNumber;
    char departureCity[50];
    char destinationCity[50];
    char date[20];
    int availableSeats;
};
void bookSeat(struct Flight *f) {
    if (f->availableSeats > 0) {
        f->availableSeats--; 
        printf("Seat booked successfully!\n");
    } else {
        printf("Sorry, no seats available on this flight.\n");
    }
}
void displayFlightDetails(struct Flight f) {
    printf("Flight Number: %d\n", f.flightNumber);
    printf("Departure City: %s\n", f.departureCity);
    printf("Destination City: %s\n", f.destinationCity);
    printf("Date: %s\n", f.date);
    printf("Available Seats: %d\n", f.availableSeats);
}

int main() {
    struct Flight flight1 = {101, "New York", "Los Angeles", "2024-12-01", 50};
    
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Display Flight Details\n");
        printf("2. Book a Seat\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                displayFlightDetails(flight1);
                break;
            case 2:
                bookSeat(&flight1);
                break;
            case 3:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
