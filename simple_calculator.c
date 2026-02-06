// Write a C program to perform basic arithmetic operations on two integers with division safety check.

// The program should:

// Ask the user to enter two integers a and b.

// Calculate and display:

// Sum of a and b

// Difference of a and b

// Product of a and b

// Division of a by b (only if b is not zero)

// If b is zero, display the message "Division by zero not possible".

// Input

// Two integers entered by the user.

// Output

// Results of arithmetic operations and safe division message if needed.

// Example

// Input

// Enter a : 8
// Enter b : 2


// Output

// The div of a / b = 4
// The sum of a + b = 10
// The diff of a - b = 6
// The pro of a x b = 16


#include<stdio.h>
int main() {
    int a,b;
    printf("Enter a :");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);

    printf("The sum of a + b = %d\n", a+b);
    printf("The diff of a - b = %d\n", a-b);
    printf("The pro of a x b = %d\n", a*b);

    if(b != 0){
        printf("The div of a / b = %d\n", a/b);
    }
    else{
        printf("Division by zero not possible\n");
    }

    return 0;
}
