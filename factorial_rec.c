// Write a C program to compute the factorial of a number using recursion.

// The program should:

// Ask the user to enter an integer N.

// Check if the number is negative:

// If negative, display "Factorial not defined for negative numbers"

// Otherwise, call a recursive function rec(n) that:

// Returns 1 when n == 0 or n == 1 (base case)

// Otherwise returns n × rec(n-1)

// Display the factorial of the number.

// Input

// An integer N entered by the user.

// Output

// Factorial of N or an error message.

// Example

// Input

// Enter a number = 4


// Output

// The factorial is 24




#include<stdio.h>

int rec(int n);

int main(){
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);

    if(n < 0)
        printf("Factorial not defined for negative numbers");
    else
        printf("The factorial is %d", rec(n));

    return 0;
}

int rec(int n){
    if(n == 0 || n == 1)
        return 1;
    return n * rec(n-1);
}
