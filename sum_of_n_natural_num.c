// Write a C program to find the sum of the first N natural numbers using recursion.

// The program should:

// Ask the user to enter an integer N.

// Call a recursive function natural_number(n) that:

// Returns 0 if n <= 0

// Returns 1 if n == 1

// Otherwise returns n + natural_number(n-1)

// Display the sum of the first N natural numbers.

// Input

// An integer N entered by the user.

// Output

// The sum of the first N natural numbers.

// Example

// Input

// Enter a number = 4


// Output

// Sum of n natural number is 10




 #include<stdio.h>
int natural_number(int n);
int main(){
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    printf("Sum of n natural number is %d",natural_number(n));
    return 0;
}
int natural_number(int n) {
    if(n <= 0){
    return 0;
    }
    else if(n==1){
        return 1;
    }
    int sum = natural_number(n-1);
    int add = sum+n;
    return add;
}

