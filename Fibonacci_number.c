// Write a C program to find the Nth Fibonacci number using recursion.

// The program should:

// Ask the user to enter an integer N.

// Check if the number is negative:

// If negative, display "Invalid input".

// Otherwise call a recursive function fibonacci(n) that:

// Returns 0 when n == 0

// Returns 1 when n == 1

// Otherwise returns fibonacci(n-1) + fibonacci(n-2)

// Display the Nth Fibonacci number.

// Input

// An integer N entered by the user.

// Output

// The Nth Fibonacci number or an error message.

// Example

// Input

// Enter number = 7


// Output

// 13






  #include<stdio.h>

int fibonacci(int n);

int main(){
    int n;
    printf("Enter number = ");
    scanf("%d",&n);

    if(n < 0)
        printf("Invalid input");
    else
        printf("%d", fibonacci(n));

    return 0;
}

int fibonacci(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}
