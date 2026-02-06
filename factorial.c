// Write a C program to calculate the factorial of a given number using a for loop.

// The program should:

// Ask the user to enter an integer number N.

// Calculate the factorial using the formula:

// N!=1×2×3×⋯×N

// Display the calculated factorial.

// Input

// An integer N entered by the user.

// Output

// The factorial of the number.

// Example

// Input

// Enter a number: 5


// Output

// 120



#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial not defined for negative numbers");
    }
    else {
        int fact = 1;
        for(int i = 1; i <= num; i++) {
            fact = fact * i;
        }
        printf("%d", fact);
    }

    return 0;
}
