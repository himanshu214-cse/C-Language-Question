// Write a C program to check whether the entered character is a digit or not.

// The program should:

// Ask the user to enter a single character.

// Use the function isdigit() from <ctype.h> to check whether the character is a numeric digit (0–9).

// Display:

// "Entered char is digit" if the character is a digit

// "Entered char is not a digit" otherwise

// Input

// A single character entered by the user.

// Output

// A message indicating whether the character is a digit or not.

// Example

// Input

// Enter char = 7


// Output

// Entered char is digit


// Input

// Enter char = A


// Output

// Entered char is not a digit



#include<stdio.h>
#include<ctype.h>
int main() {
   char ch;
   printf("Enter char = ");
   scanf("%c",&ch);
   if(isdigit(ch)) {
       printf("Entered char is digit\n");
   }
   else {
       printf("Entered char is not a digit");
   }
    return 0;
}
