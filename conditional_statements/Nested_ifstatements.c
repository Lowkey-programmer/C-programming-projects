// #include <stdio.h>
// #include <stdbool.h>

// int main() {
//     int isstudent;
//     int issenior;
//     double price = 100.0;

//     printf("Are you a student? (1 for yes, 0 for no): ");
//     scanf("%d", &isstudent);

//     printf("Are you a senior citizen? (1 for yes, 0 for no): ");
//     scanf("%d", &issenior);

//     if (isstudent && issenior) {
//         printf("You are eligible for both student and senior citizen discounts.\n");
//         price = price * 0.7;   // 30% discount
//     }
//     else if (isstudent) {
//         printf("You are eligible for a student discount.\n");
//         price = price * 0.9;   // 10% discount
//     }
//     else if (issenior) {
//         printf("You are eligible for a senior citizen discount.\n");
//         price = price * 0.8;   // 20% discount
//     }
//     else {
//         printf("You are not eligible for any discounts.\n");
//     }

//     printf("Final price: %.2lf\n", price);

//     return 0;
// }