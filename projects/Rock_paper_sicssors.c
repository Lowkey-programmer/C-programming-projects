#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player_choice;
    int computer_choice;
    int player_score = 0;
    int computer_score = 0;

    printf("Welcome to Rock, Paper, Scissors!\n");

    for (int i = 0; i < 3; i++) {
        printf("Round %d\n", i + 1);
        printf("Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ");
        scanf("%d", &player_choice);

        if (player_choice < 0 || player_choice > 2) {
            printf("Invalid choice. Please enter 0, 1, or 2.\n");
            i--; // retry the same round
            continue;
        }

        srand(time(0));
        computer_choice = rand() % 3;

        printf("You chose: ");
        switch (player_choice) {
            case 0:
                printf("Rock\n");
                break;
            case 1:
                printf("Paper\n");
                break;
            case 2:
                printf("Scissors\n");
                break;
        }

        printf("Computer chose: ");
        switch (computer_choice) {
            case 0:
                printf("Rock\n");
                break;
            case 1:
                printf("Paper\n");
                break;
            case 2:
                printf("Scissors\n");
                break;
        }

        if (player_choice == computer_choice) {
            printf("It's a tie!\n");
        } else if ((player_choice == 0 && computer_choice == 2) ||
                   (player_choice == 1 && computer_choice == 0) ||
                   (player_choice == 2 && computer_choice == 1)) {
            printf("You win this round!\n");
            player_score++;
        } else {
            printf("Computer wins this round!\n");
            computer_score++;
        }
    }

    printf("\nFinal Scores:\n");
    printf("You: %d\n", player_score);
    printf("Computer: %d\n", computer_score);

    if (player_score > computer_score) {
        printf("Congratulations! You won the game!\n");
    } else if (player_score < computer_score) {
        printf("Sorry, you lost the game.\n");
    } else {
        printf("The game is a tie!\n");
    }

    return 0;
}