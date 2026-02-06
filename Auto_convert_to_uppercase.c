// Write a C program that reads a single character from the user.

// If the entered character is a lowercase alphabet (a to z), convert it into its uppercase equivalent and display it.

// Otherwise, display the message "Already in upper case".

// Input

// A single character entered by the user.

// Output

// The uppercase version of the character if it is lowercase
// OR

// The message "Already in upper case" if the character is not lowercase.

    
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>96&&ch<123){
        printf("%c",ch-32);
    }
    else{
        printf("Already in upper case");
    }
    return 0;
}
