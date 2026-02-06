// Write a C program to implement a simple calculator using conditional statements.

// The program should:

// Accept two floating-point numbers from the user.

// Accept an arithmetic operator (+, -, *, /).

// Perform the selected operation and display the result.

// Handle division by zero by displaying an error message.

// Display a message if an invalid operator is entered.

// Input

// Two floating-point numbers

// An operator (+, -, *, /)

// Output

// Result of the chosen operation

// OR an error message (invalid operator / division by zero)

// Example

// Input

// Enter any number: 12
// Enter any number: 4
// Enter sign :--> /


// Output

// 3.000000
// This calculator created by Himanshu Verma😎


#include<stdio.h>
int main() {
    float num1, num2;
    char sign;

    printf("Enter any number: ");
    scanf("%f", &num1);

    printf("Enter any number: ");
    scanf("%f", &num2);

    printf("Enter sign :--> ");
    scanf(" %c", &sign);

    if(sign == '+')
        printf("%f", num1+num2);
    else if(sign == '-')
        printf("%f", num1-num2);
    else if(sign == '*')
        printf("%f", num1*num2);
    else if(sign == '/') {
        if(num2 == 0)
            printf("Division by zero not allowed");
        else
            printf("%f", num1/num2);
    }
    else
        printf("Please enter a valid operator...");

    printf("\nThis calculator created by Himanshu Verma😎");
    return 0;
}
