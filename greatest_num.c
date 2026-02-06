// Write a C program to compare two numbers and determine which one is greater, or if they are equal.

// The program should:

// Ask the user to enter two integer numbers.

// Compare the numbers using conditional statements.

// Display:

// The greater number if one is larger

// "Both numbers are equal" if they are the same

// Input

// Two integers entered by the user.

// Output

// The greater number or a message indicating equality.

// Example

// Input

// Enter first number = 10
// Enter second number = 20


// Output

// The greatest number is = 20


// Input

// Enter first number = 5
// Enter second number = 5


// Output

// Both numbers are equal



#include<stdio.h>
int main() {
  int num1;
  printf("Enter first number = ");
  scanf("%d",&num1);
  int num2;
  printf("Enter second number = ");
  scanf("%d",&num2);
  if(num1 > num2){
    printf("The greatest number is = %d", num1);
  }
  else if(num2 > num1){
    printf("The greatest number is = %d", num2);
  }
  else{
    printf("Both numbers are equal");
  }
    return 0;
}
