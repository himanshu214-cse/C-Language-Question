// Write a C program to determine whether an employee is eligible for a bonus based on years of service.

// The program should:

// Ask the user to enter the number of years the employee has worked in the company.

// Check the condition:

// If the employee has worked 5 years or more, display "You are eligible for bonus."

// Otherwise, display "You are not eligible for bonus."

// Input

// An integer representing the number of years worked in the company.

// Output

// A message indicating whether the employee is eligible for a bonus.

// Example

// Input

// Enter how old are you in this com : 6


// Output

// You are eligible for bonus.

    
    
#include<stdio.h>
int main() {
    int year;
    printf("Enter years worked in company : ");
    scanf("%d",&year);

    if(year >= 5){
        printf("You are eligible for bonus.");
    }
    else{
        printf("You are not eligible for bonus.");
    }
    return 0;
}
