// Random number guessing game in 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int number = 0, attempts = 0;
    int min = 1, max = 100, guess = 0;
    int range = max - min + 1;

    srand(time(0)); // Seed the random number generator
    number = rand() % range + min; // Generate a random number between min and max

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between %d and %d. Can you guess it?\n", min, max);

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);

    return 0;
}