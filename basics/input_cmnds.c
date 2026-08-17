// # include <stdio.h>
// #include <string.h>
// int main(){
//     int age;
//     float height;
//     char grade;
//     char name[50];

//     printf("Enter your age: ");
//     scanf("%d", &age);

//     printf("Enter your height: ");
//     scanf("%f", &height);

//     printf("Enter your grade: ");
//     scanf(" %c", &grade);
//     getchar(); // To consume the newline character left by previous scanf

//     printf("Enter your name: ");
//     fgets(name, sizeof(name), stdin);
//     name[strlen(name) - 1] = '\0'; // Remove the newline character

//     printf("Age: %d\n", age);
//     printf("Height: %.2f\n", height);
//     printf("Grade: %c\n", grade);
//     printf("Name: %s\n", name);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(){
//     float price;
//     char item[50];
//     int quantity;
//     char currency[10] = "USD"; // Default currency
//     float total;

//     printf("Enter the item name: ");
//     fgets(item, sizeof(item), stdin);
//     item[strlen(item) - 1] = '\0'; // Remove the newline character

//     printf("Enter the price: ");
//     scanf("%f", &price);
//     getchar(); // To consume the newline character left by previous scanf

//     printf("Enter the quantity: ");
//     scanf("%d", &quantity);

//     printf("\n--- Receipt --- \n");

//     printf("Item: %s\n", item);
//     printf("Price: %.2f\n", price);
//     printf("Quantity: %d\n", quantity);
//     printf("Total: %.2f %s\n", price * quantity, currency);

//     return 0;
// }

