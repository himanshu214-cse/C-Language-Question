// Write a C program that prints a greeting message based on the user’s country choice using user-defined functions.

// The program should:

// Ask the user to enter a character:

// i or I for India

// f or F for France

// Use conditional statements to call the appropriate function:

// ind() → prints "Namaste ji"

// fre() → prints "Bonjour"

// Display "Please enter any one of these" if an invalid character is entered.

// Input

// A single character (i/I/f/F) entered by the user.

// Output

// A greeting message based on the selected country.

// Example

// Input

// Where are you from? i for India and f for France = f


// Output

// Bonjour


#include<stdio.h>
void ind();
void fre();
int main(){
    char ch;
    printf("Where are you from? i for India and f for France = ");
    scanf("%c",&ch);
    if(ch=='i'||ch=='I'){
        ind();
    }
    else if(ch=='f'||ch=='F'){
        fre();
    }
    else{
        printf("Please enter any one of these");
    }
    return 0;
}
void ind(){
    printf("Namaste ji");
}
void fre(){
    printf("Bonjour");
}
