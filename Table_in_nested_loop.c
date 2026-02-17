// Write a C program to print multiplication tables from 1 to N using nested loops.

// The program should:

// Ask the user to enter an integer N.

// Use nested for loops to print multiplication tables from 1 to N.

// Each table should display multiplication from 1 to 10.

// Leave a blank line after each table for better readability.

// Input

// An integer N entered by the user.

// Output

// Multiplication tables from 1 to N.

// Example

// Input

// Enter a number = 3


// Output

// 1 x 1 = 1
// 1 x 2 = 2
// ...
// 1 x 10 = 10

// 2 x 1 = 2
// ...
// 2 x 10 = 20

// 3 x 1 = 3
// ...
// 3 x 10 = 30




#include<stdio.h>
int main(){
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=10; j++){
            printf("%d x %d = %d \n",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
