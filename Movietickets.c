#include <stdio.h>

#define ROWS 5
#define COLS 10

void displaySeats(char movieSeats[][COLS])
 {
printf("\nMovie Ticket Booking System\n");
printf(" \n");
for (int i = 0; i < ROWS; i++) {
printf("Row %d:\t", i + 1);
for (int j = 0; j < COLS; j++) {
printf("%c ", movieSeats[i][j]);
}
printf("\n");
}
}

void bookTicket(char movieSeats[][COLS])
 {
int row, col;
printf("\nEnter the seat row (1-%d): ", ROWS);
scanf("%d", &row);
if (row < 1 || row > ROWS) {
printf("Invalid row number. Please try again.\n");
return;
}

printf("Enter the seat column (1-%d): ", COLS);
scanf("%d", &col);

if (col < 1 || col > COLS) 
{
printf("Invalid column number. Please try again.\n");
return;
}

if (movieSeats[row - 1][col - 1] == 'X') 
{
printf("Seat already booked. Please choose another seat.\n");
} 
else
 {
movieSeats[row - 1][col - 1] = 'X';
printf("Ticket booked successfully!\n");
}
}



void cancelTicket(char movieSeats[][COLS])
 {
int row, col;
printf("\nEnter the seat row (1-%d): ", ROWS);
scanf("%d", &row);
if (row < 1 || row > ROWS) {
printf("Invalid row number. Please try again.\n");
return;
}

printf("Enter the seat column (1-%d): ", COLS);
scanf("%d", &col);

if (col < 1 || col > COLS) 
{
printf("Invalid column number. Please try again.\n");
return;
}

if (movieSeats[row - 1][col - 1] == 'O')
 {
printf("Seat not booked. Please enter a booked seat.\n");
} 
else
 {
movieSeats[row - 1][col - 1] = 'O';
printf("Ticket canceled successfully!\n");
}
}

int main() 
{
char movieSeats[ROWS][COLS];
for (int i = 0; i < ROWS; i++) 
{
for (int j = 0; j < COLS; j++) 
{
movieSeats[i][j] = 'O';
}
}
int choice;
do
 {
displaySeats(movieSeats);
printf("\nMovie Ticket Booking Menu\n");
printf("1. Book a Ticket\n");
printf("2. Cancel Ticket\n");
printf("3. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
bookTicket(movieSeats);
break;
case 2:
cancelTicket(movieSeats);
break;
case 3:
printf("Exiting program.\n");
break;
default:
printf("Invalid choice. Please try again.\n");
}
} 
while (choice != 3);
return 0;
}


