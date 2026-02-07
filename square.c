// Write a C program that uses a user-defined function to calculate the square of a number.

// The program should:

// Ask the user to enter a number.

// Call a function square() and pass the number as an argument.

// Inside the function, calculate the square of the number using pow() from <math.h>.

// Display the result up to two decimal places.

// Input

// A floating-point number entered by the user.

// Output

// The square of the number.

// Example

// Input

// Enter a number = 4


// Output

// The square of the number is 16.00


#include<stdio.h>
#include<math.h>
void square(double n);
int main(){
    double n;
    printf("Enter a number = ");
    scanf("%lf",&n);
    square(n);
    return 0;
}
void square(double n){
    printf("The square of the number is %.2lf",pow(n,2));
}
