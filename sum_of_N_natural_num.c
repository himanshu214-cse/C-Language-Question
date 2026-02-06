// Write a C program to find the sum of the first N natural numbers using a do–while loop.

// The program should:

// Ask the user to enter an integer value N.

// Use a do–while loop to calculate the sum:

// Sum=1+2+3+⋯+N

// Display the calculated sum.

// Input

// An integer N entered by the user.

// Output

// The sum of the first N natural numbers.

// Example

// Input

// Enter a number : 5


// Output

// 15



#include<stdio.h>
int main() {
    int num1;
    printf("Enter a number : ");
    scanf("%d", &num1);
    int i=1;
    int sum = 0;
    do {
        sum = sum+i;
        i++;
    } while(i<=num1);
    printf("%d", sum);
    return 0;
}
