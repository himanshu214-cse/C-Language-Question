// Write a C program to calculate the average of three numbers.

// The program should:

// Ask the user to enter three floating-point numbers.

// Calculate their average using the formula:​

// Display the result rounded to two decimal places.

// Input

// Three floating-point numbers entered by the user.

// Output

// The average of the three numbers.

// Example

// Input

// Enter num1 = 10
// Enter num2 = 20
// Enter num3 = 30


// Output

// The avg of num1, num2, num3, is = 20.00


#include<stdio.h>
int main() {
   float num1;
   printf("Enter num1 = ");
   scanf("%f",&num1);
   float num2;
   printf("Enter num2 = ");
   scanf("%f",&num2);
   float num3;
   printf("Enter num3 = ");
   scanf("%f",&num3);
   printf("The avg of num1, num2, num3, is = %.2f",(num1+num2+num3)/3);
    return 0;
}
