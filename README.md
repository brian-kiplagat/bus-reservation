This C project is a simple bus reservation system that allows users to perform various actions related to seat reservations. The program uses a struct Reservation to represent each reservation, containing information such as seat number, passenger name, and an employee login flag. The main functionalities include reserving a seat, canceling a reservation, displaying all reservations, and performing an employee login for additional privileges.

The program consists of the following key components:

Struct Definition:

Defines a struct named Reservation to store information about each reservation, including seat number, passenger name, and an employee login flag.
Menu Display Function:

displayMenu function prints out a menu with options for seat reservation, cancellation, reservation display, employee login, and program exit.
Seat Reservation Function:

reserveSeat function allows users to reserve a seat by entering the passenger's name. It checks for seat availability and updates the reservation list accordingly.
Reservation Cancellation Function:

cancelReservation function prompts the user to enter a seat number for cancellation. If the seat number is valid, it removes the corresponding reservation.
Display Reservations Function:

displayReservations function prints a list of all current reservations, showing seat numbers and passenger names.
Employee Login Function:

employeeLogin function simulates an employee login by requesting a username and password. It compares the input with hardcoded values and grants access if the credentials are correct.
Main Function:

Initializes an array of Reservation structs to store reservations.
Manages a loop that displays the menu and executes user-selected actions until the user chooses to exit.
Overall, this project serves as a basic implementation of a bus reservation system with user and employee functionalities. Note that the employee login system is rudimentary and should be enhanced for real-world applications.





