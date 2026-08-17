

// infinite loop

// #include <stdio.h>
// int main() {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     while (number != 0) {
//         printf("The number is %d.\n", number);
//         printf("Enter a number (0 to exit): ");
//         scanf("%d", &number);
//     }

//     printf("Exited the loop.\n");
//     return 0;
// }

// # include <stdio.h>
// # include <stdbool.h>

// int main() {
//     int number;
//     bool keepRunning = true;

//     do {
//         printf("Enter a number (0 to exit): ");
//         scanf("%d", &number);

//         if (number == 0) {
//             keepRunning = false;
//         } else {
//             printf("The number is %d.\n", number);
//         }
//     } 
    
//     while (keepRunning);

//     printf("Exited the loop.\n");
//     return 0;
// }