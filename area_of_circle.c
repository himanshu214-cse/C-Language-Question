// Write a C program to calculate the area of a circle.

// The program should:

// Ask the user to enter the radius of the circle.

// Use the value of π as 3.14.

// Calculate the area using the formula:

// Area
// =
// 𝜋
// ×
// 𝑟
// ×
// 𝑟
// Area=π×r×r

// Display the calculated area.

// Input

// A floating-point number representing the radius of the circle.

// Output

// The area of the circle.

// Example

// Input

// Enter radius : 5


// Output

// The area of the circle is : 78.500000
    
    
    
    
#include<stdio.h>
int main() {
    float radi;
    printf("Enter radius :");
    scanf("%f", &radi);
    float pi = 3.14;
    float area = pi*radi*radi;
    printf("The area of the circle is : %f", area);
    return 0;
}
