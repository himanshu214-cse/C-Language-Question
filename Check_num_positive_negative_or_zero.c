// Write a C program to check whether a given number is positive, negative, or zero.

// The program should:

// Ask the user to enter an integer number.

// Check the value of the number:

// If the number is 0, display "The number is zero"

// If the number is greater than 0, display "The number is positive"

// If the number is less than 0, display "The number is negative"

// Input

// An integer entered by the user.

// Output

// A message indicating whether the number is positive, negative, or zero.

// Example

// Input

// Enter the number = 5


// Output

// The number is positive


// Input

// Enter the number = -3


// Output

// The number is negative


// Input

// Enter the number = 0


// Output

// The number is zero


#include<stdio.h>
int main() {
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    if(n==0){
        printf("The number is zero");
    }
    else if(n>0){
        printf("The number is positive");
    }
    else{
        printf("The number is negative");
    }
    return 0;
}
