#include <stdio.h>
#include <string.h>

// Define a struct to represent a bus reservation
struct Reservation {
    int seatNumber;
    char passengerName[50];
    int employeeLogin; // Employee login flag
};

// Function to display the menu
void displayMenu() {
    printf("1. Reserve a seat\n");
    printf("2. Cancel a reservation\n");
    printf("3. Display all reservations\n");
    printf("4. Employee login\n");
    printf("5. Exit\n");
}

// Function to reserve a seat
void reserveSeat(struct Reservation reservations[], int* totalReservations) {
    if (*totalReservations < 10) {
        struct Reservation newReservation;
        printf("Enter passenger name: ");
        scanf("%s", newReservation.passengerName);
        newReservation.seatNumber = *totalReservations + 1;
        reservations[*totalReservations] = newReservation;
        (*totalReservations)++;
        printf("Seat reserved successfully.\n");
    } else {
        printf("No more seats available.\n");
    }
}

// Function to cancel a reservation
void cancelReservation(struct Reservation reservations[], int* totalReservations) {
    int seatNumber;
    printf("Enter seat number to cancel reservation: ");
    scanf("%d", &seatNumber);
    if (seatNumber >= 1 && seatNumber <= *totalReservations) {
        for (int i = seatNumber - 1; i < *totalReservations - 1; i++) {
            reservations[i] = reservations[i + 1];
        }
        (*totalReservations)--;
        printf("Reservation canceled successfully.\n");
    } else {
        printf("Invalid seat number.\n");
    }
}

// Function to display all reservations
void displayReservations(struct Reservation reservations[], int totalReservations) {
    printf("Seat Number\tPassenger Name\n");
    for (int i = 0; i < totalReservations; i++) {
        printf("%d\t\t%s\n", reservations[i].seatNumber, reservations[i].passengerName);
    }
}

// Function to perform employee login
int employeeLogin() {
    char username[20];
    char password[20];
    
    printf("Enter employee username: ");
    scanf("%s", username);
    printf("Enter employee password: ");
    scanf("%s", password);

    // Perform authentication (you can replace this with a file-based authentication system)
    if (strcmp(username, "brian") == 0 && strcmp(password, "brian") == 0) {
        printf("Employee login successful.\n");
        return 1; // Employee login successful
    } else {
        printf("Employee login failed.\n");
        return 0; // Employee login failed
    }
}

int main() {
    struct Reservation reservations[10]; // Array to store reservations
    int totalReservations = 0; // Total number of reservations
    int employeeLoggedIn = 0; // Employee login status

    while (1) {
        displayMenu();
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                reserveSeat(reservations, &totalReservations);
                break;
            case 2:
                cancelReservation(reservations, &totalReservations);
                break;
            case 3:
                displayReservations(reservations, totalReservations);
                break;
            case 4:
                if (!employeeLoggedIn) {
                    employeeLoggedIn = employeeLogin();
                } else {
                    printf("Employee already logged in.\n");
                }
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
