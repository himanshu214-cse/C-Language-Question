// Write a C program to calculate the area of different shapes using a switch statement.

// The program should:

// Ask the user to choose a shape:

// 1 → Circle

// 2 → Square

// 3 → Rectangle

// Based on the choice, take the required dimensions as input.

// Calculate and display the area using the formulas:

// Circle → 𝜋*𝑟*r

// (use π = 3.14)

// Square → side × side

// Rectangle → length × width

// Display "Invalid choice" if the input does not match any option.

// Input

// An integer choice and dimensions of the selected shape.

// Output

// Area of the chosen shape.

// Example

// Input

// Which shape area do you find 1 for circle 2 for square 3 for rectangle = 2
// Enter the side = 4


// Output

// The area of the square = 16



#include<stdio.h>
int main(){
    int find;
    printf("Which shape area do you find 1 for circle 2 for square 3 for rectangle = ");
    scanf("%d",&find);

    switch(find)
    {
        case 1: {
            float r;
            printf("Enter the radius = ");
            scanf("%f",&r);
            printf("The area of the circle = %.2f", 3.14*r*r);
            break;
        }

        case 2: {
            int s;
            printf("Enter the side = ");
            scanf("%d",&s);
            printf("The area of the square = %d", s*s);
            break;
        }

        case 3: {
            int l,b;
            printf("Enter the length & width = ");
            scanf("%d %d",&l,&b);
            printf("The area of the rectangle = %d", l*b);
            break;
        }

        default:
            printf("Invalid choice");
    }

    return 0;
}
