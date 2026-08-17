// # include <stdio.h>
// #include <math.h>
// int main()
// {
//     double principal;
//     float rate;
//     int time;

//     printf("Enter the principal amount: ");
//     scanf("%lf", &principal);

//     printf("Enter the rate of interest (in percentage): ");
//     scanf("%f", &rate);

//     printf("Enter the time (in years): ");
//     scanf("%d", &time);

//     printf("\n----Output:----\n");
//     printf("Compound Interest: %.2f\n", principal * pow((1 + rate / 100), time) - principal);
//     printf("Total Amount: %.2f\n", principal * pow((1 + rate / 100), time));

//     return 0;

// }

# include <stdio.h>
#include <math.h>
int main()
{
    double principal;
    float rate;
    int time;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%d", &time);

    double compound_interest = principal * pow((1 + rate / 100), time) - principal;
    printf("\n----Output:----\n");
    printf("Compound Interest: %.2f\n", compound_interest);
    printf("Total Amount: %.2f\n", principal + compound_interest);

    return 0;

}