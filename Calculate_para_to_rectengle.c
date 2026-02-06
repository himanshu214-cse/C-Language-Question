// Write a C program to calculate the perimeter of a rectangle.
// The program should:

// Ask the user to enter the length of the rectangle.

// Ask the user to enter the width of the rectangle.

// Calculate the perimeter using the formula:

// Perimeter=2×(length+width)

// Display the calculated perimeter.

// Input

// Two integers representing the length and width of the rectangle.

// Output

// The perimeter of the rectangle.

// Example

// Input

// Enter the length = 5
// Enter the width = 3


// Output

// The perimeter of the rectangle is = 16


#include<stdio.h>
int main() {
    int length;
    printf("Enter the length = ");
    scanf("%d",&length);
    int width;
    printf("Enter the width = ");
    scanf("%d",&width);
    printf("The parameter of the rectengle is = %d", 2*(length+width));
    return 0;
}
