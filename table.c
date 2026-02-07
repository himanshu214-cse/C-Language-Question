// Write a C program that uses a user-defined function to display the multiplication table of a given number.

// The program should:

// Ask the user to enter an integer number.

// Pass the number to a function table(n).

// Inside the function, use a loop to print the multiplication table from 1 to 10.

// Display each step in the format:

// n×i=result
// Input

// An integer entered by the user.

// Output

// Multiplication table of the entered number from 1 to 10.

// Example

// Input

// Enter number = 3


// Output

// 3 x 1 = 3
// 3 x 2 = 6
// 3 x 3 = 9
// ...
// 3 x 10 = 30


#include<stdio.h>
void table(int n);
int main() {
    int n;
    printf("Enter number = ");
    scanf("%d",&n);
    table(n);
    return 0;
}
void table(int n){
    for(int i=1; i<=10; i++) {
        printf("%d x %d = %d\n", n, i, i*n);
    }
}
