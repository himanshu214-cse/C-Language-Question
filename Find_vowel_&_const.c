// Write a C program to check whether an entered character is a vowel or a consonant.

// The program should:

// Ask the user to enter a single character.

// Check if the character is a vowel (A, E, I, O, U in both uppercase and lowercase).

// Display:

// "vowel" if the character is a vowel

// "cons" (consonant) otherwise

// Input

// A single character entered by the user.

// Output

// Print "vowel" if the character is a vowel, otherwise print "cons".

// Example

// Input

// Enter any ch = a


// Output

// vowel


// Input

// Enter any ch = k


// Output

// cons


#include<stdio.h>
int main() {
    char ch;
    printf("Enter any ch = ");
    scanf("%c",&ch);
    (ch == 'A'||ch =='E'||ch =='I'||ch =='O'||ch =='U'||ch == 'a'||ch =='e'||ch =='i'||ch =='o'||ch =='u') ? printf("vowel"):printf("cons");
    return 0;
}
