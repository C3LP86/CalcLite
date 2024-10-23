#include <stdio.h>

/* Simple calculator with basic operations */

/* Function to add two numbers */
float addition(float nmb_1, float nmb_2) {
    return nmb_1 + nmb_2;
}

/* Function to subtract the second number from the first */
float subtraction(float nmb_1, float nmb_2) {
    return nmb_1 - nmb_2;
}

/* Function to multiply two numbers */
float multiplication(float nmb_1, float nmb_2) {
    return nmb_1 * nmb_2;
}

/* Function to divide the first number by the second.
   Handles division by zero with an error message. */
float division(float nmb_1, float nmb_2) {
    if (nmb_2 == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return nmb_1 / nmb_2;
}

int main() {
    /* Variables to hold user input */
    float nmb_1 = 0;
    float nmb_2 = 0;
    int operator = 0;
    float result = 0;

    /* Display the list of operations available */
    printf("1) Addition\n");
    printf("2) Subtraction\n");
    printf("3) Multiplication\n");
    printf("4) Division\n");
    printf("-----------------------------\n\n");

    /* Get user input for the numbers and operation */
    printf("Please enter your first number: ");
    scanf("%f", &nmb_1);
    printf("Please enter your second number: ");
    scanf("%f", &nmb_2);
    printf("Please choose your operator (Between 1 and 4): ");
    scanf("%d", &operator);

    /* Perform the operation based on the user choice */
    switch (operator) {
        case 1:
            result = addition(nmb_1, nmb_2);
            printf("\nResult: %f\n", result);
            break;
        case 2:
            result = subtraction(nmb_1, nmb_2);
            printf("\nResult: %f\n", result);
            break;
        case 3:
            result = multiplication(nmb_1, nmb_2);
            printf("\nResult: %f\n", result);
            break;
        case 4:
            result = division(nmb_1, nmb_2);
            /* Division by zero is already handled in the function */
            if (nmb_2 != 0) {
                printf("\nResult: %f\n", result);
            }
            break;
        default:
            /* Error message if an invalid operation is chosen */
            printf("Error: Please choose a valid option between 1 and 4!\n");
            return 1;
    }

    return 0;
}