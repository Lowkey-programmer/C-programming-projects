# include <stdio.h>
# include <math.h>

int main(){
    int number;
    int number2;
    int number3;

    printf("Enter the first number: ");
    scanf("%d", &number);
    
    printf("Enter the second number: ");
    scanf("%d", &number2);

    printf("Enter the third number: ");
    scanf("%d", &number3);

    printf("\n----Output:----\n");

    printf("Square root of %d is %.2f\n", number, sqrt(number));
    printf("Square root of %d is %.2f\n", number2, sqrt(number2));
    printf("Square root of %d is %.2f\n", number3, sqrt(number3));
    printf("Power of %d raised to %d is %.2f\n", number, number2, pow(number, number2));
    printf("Power of %d raised to %d is %.2f\n", number2, number3, pow(number2, number3));
    printf("round of %.2f\n", ceil(number), round(number));
    printf("round of %.2f\n", ceil(number2), round(number2));
    printf("round of %.2f\n", ceil(number3), round(number3));
    printf("floor of %.2f\n", floor(number));
    printf("floor of %.2f\n", floor(number2));
    printf("floor of %.2f\n", floor(number3));
    printf("Absolute value of %d\n", abs(number));
    printf("Absolute value of %d\n", abs(number2));
    printf("Absolute value of %d\n", abs(number3));
    
    return 0;
} 

