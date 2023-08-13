#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store movie details
struct Movie {
    char title[100];
    char genre[50];
    int rating;
    int availableSeats;
};

// Function to display movie details
void displayMovie(struct Movie movie) {
    printf("Title: %s\n", movie.title);
    printf("Genre: %s\n", movie.genre);
    printf("Rating: %d/10\n", movie.rating);
    printf("Available Seats: %d\n", movie.availableSeats);
}

// Function to book a ticket
void bookTicket(struct Movie *movie) {
    if (movie->availableSeats > 0) {
        printf("Booking a ticket for %s\n", movie->title);
        movie->availableSeats--;
        printf("Ticket booked successfully!\n");
    } else {
        printf("Sorry, no more seats available for %s\n", movie->title);
    }
}

int main() {
    // Create a sample movie
    struct Movie movie1;
    strcpy(movie1.title, "The Matrix");
    strcpy(movie1.genre, "Sci-Fi");
    movie1.rating = 8;
    movie1.availableSeats = 50;

    // Display movie details
    displayMovie(movie1);

    // Book a ticket
    bookTicket(&movie1);

    // Display updated movie details
    displayMovie(movie1);

    return 0;
}
