// Write a C program to calculate the cube of a number.

// The program should:

// Ask the user to enter an integer number.

// Calculate the cube of the number using the formula:

// Cube=n×n×n

// Display the result.

// Input

// An integer entered by the user.

// Output

// The cube of the entered number.

// Example

// Input

// Enter a number = 3


// Output

// The cube of the number = 27
    
    
    
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number = ");
    scanf("%d",&num);
    printf("The cube of the number = %d",num*num*num);
    return 0;
}
