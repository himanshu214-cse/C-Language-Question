// Write a C program to calculate the area of a square.

// The program should:

// Ask the user to enter the length of the side of the square.

// Calculate the area using the formula:

// Area=side×side

// Display the calculated area.

// Input

// A floating-point number representing the side of the square.

// Output

// The area of the square.

// Example

// Input

// Enter the side of the square : 4


// Output

// The area of the square is : 16.000000
    
    
    
    
#include<stdio.h>
int main() {
    float side;
    printf("Enter the side of the square :");
    scanf("%f", &side);
    printf("The area of the square is : %f", side*side);
    return 0;
}
