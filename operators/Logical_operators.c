// // Write a C program that asks the user to enter their age, whether they have a valid ID (1 for Yes, 0 for No), and whether they are banned (1 for Yes, 0 for No).

// // If the user is 18 years or older, has a valid ID, and is not banned, display:

// // Access Granted

// // If the user is under 18 or does not have a valid ID, display:

// // Access Denied: Age or ID requirement not met.

// // Otherwise (if the user is banned), display:

// // Access Denied: You are banned.

// #include <stdio.h>
// int main() {
    
//     int age, hasValidID, isBanned;

//     printf("Enter your age: ");
//     scanf("%d", &age);

//     printf("Do you have a valid ID? (1 for Yes, 0 for No): ");
//     scanf("%d", &hasValidID);

//     printf("Are you banned? (1 for Yes, 0 for No): ");
//     scanf("%d", &isBanned);

//     if (age >= 18 && hasValidID == 1 && isBanned == 0) {
//         printf("Access Granted\n");
//     } else if (age < 18 || hasValidID == 0) {
//         printf("Access Denied: Age or ID requirement not met.\n");
//     } else {
//         printf("Access Denied: You are banned.\n");
//     }

//     return 0;
// }