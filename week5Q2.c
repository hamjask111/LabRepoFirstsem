#include <stdio.h>
#include <math.h>  

int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest;

    // Taking input from the user
    printf("Enter Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter Time (in years): ");
    scanf("%lf", &time);

    // Calculating Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculating Compound Interest
    compoundInterest = principal * (pow((1 + rate / 100), time) - 1);

    // Displaying results
    printf("\nSimple Interest = %.2lf", simpleInterest);
    printf("\nCompound Interest = %.2lf\n", compoundInterest);

    return 0;
}
