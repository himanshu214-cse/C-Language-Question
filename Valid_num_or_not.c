// Write a C program to check whether an entered number is valid (positive) or invalid using the conditional (ternary) operator.

// The program should:

// Ask the user to enter an integer number.

// Use the ternary operator (?:) to check the number.

// Display:

// "Valid number" if the number is greater than 0

// "Invalid number" otherwise

// Input

// An integer entered by the user.

// Output

// A message indicating whether the number is valid or invalid.

// Example

// Input

// Enter number: 8


// Output

// Valid number


// Input

// Enter number: -2


// Output

// Invalid number


#include<stdio.h>
int main() {
    int num1;
    printf("Enter number: ");
    scanf("%d", &num1);

    (num1 > 0) ? printf("Valid number\n") : printf("Invalid number\n");

    return 0;
}
