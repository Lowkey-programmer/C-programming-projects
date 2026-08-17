// #include <stdio.h>
// int main() {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     for ( ; number != 0; ) {
//         if (number < 0) {
//             printf("Negative number entered. Exiting the loop.\n");
//             break; // Exit the loop if a negative number is entered
//         }
//         printf("The number is %d.\n", number);
//         printf("Enter a number (0 to exit): ");
//         scanf("%d", &number);
//     }

//     printf("Exited the loop.\n");
//     return 0;
// }

// continue for loop using numbers

// for loop using number, which ever number is even, it will skip the number and print the next number

// #include <stdio.h>
// int main() {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     for (int i = 1; i <= number; i++) {
//         if (i % 2 != 0) {
//             continue; // Skip even numbers
//         }
//         printf("The number is %d.\n", i);
//     }

//     printf("Exited the loop.\n");
//     return 0;
// }
