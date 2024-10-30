#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Input principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter rate of interest (per year): ");
    scanf("%f", &rate);
    
    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Output the result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}

