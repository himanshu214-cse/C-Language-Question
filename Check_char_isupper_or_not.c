// Write a C program that checks whether a given character is uppercase or lowercase.

// The program should:

// Take a single character as input from the user.

// Use the library function isupper() (from <ctype.h>) to check the case of the character.

// Display:

// "char is upper" if the character is uppercase

// "char is lower" otherwise

// Input

// A single character entered by the user.

// Output

// A message indicating whether the character is uppercase or lowercase.

// Example

// Input

// Enter any char : A


// Output

// char is upper


// Input

// Enter any char : b


// Output

// char is lower



#include<stdio.h>
#include<ctype.h>
int main() {
    char ch;
    printf("Enter any char : ");
    scanf("%c",&ch);
    if(isupper(ch)){
        printf("char is upper");
    }
    else{
        printf("char is lower");
    }
    return 0;
}
