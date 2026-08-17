// #include <stdio.h>

// int main(){

// int choice;
// float number;

// printf("Enter the unit:\n");
// printf("1. Celsius\n");
// printf("2. Fahrenheit\n");
// printf("3. Kelvin\n");
// scanf("%d", &choice);

// printf("Enter the temperature: ");
// scanf("%f", &number);

// if (choice == 1) {
//     // Celsius → Fahrenheit & Kelvin
//     printf("Temperature in Fahrenheit: %f\n", (number * 9/5) + 32);
//     printf("Temperature in Kelvin: %f\n", number + 273.15);
// }
// else if (choice == 2) {
//     // Fahrenheit → Celsius & Kelvin
//     printf("Temperature in Celsius: %f\n", (number - 32) * 5/9);
//     printf("Temperature in Kelvin: %f\n", ((number - 32) * 5/9) + 273.15);
// }
// else if (choice == 3) {
//     // Kelvin → Celsius & Fahrenheit
//     printf("Temperature in Celsius: %f\n", number - 273.15);
//     printf("Temperature in Fahrenheit: %f\n", ((number - 273.15) * 9/5) + 32);
// }
// else {
//     printf("Invalid choice");
// }

//     return 0;
// }