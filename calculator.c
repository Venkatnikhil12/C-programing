#include <stdio.h>

void add(float x, float y) {
    printf("Result: %.2f\n", x + y);
}

void subtract(float x, float y) {
    printf("Result: %.2f\n", x - y);
}

void multiply(float x, float y) {
    printf("Result: %.2f\n", x * y);
}

void divide(float x, float y) {
    if (y != 0) {
        printf("Result: %.2f\n", x / y);
    } else {
        printf("Error! Division by zero.\n");
    }
}

int main() {
    int choice;
    float num1, num2;

    while (1) {
        printf("Select operation:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");

        printf("Enter choice (1/2/3/4/5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            default:
                printf("Invalid input\n");
                break;
        }
    }

    return 0;
}

