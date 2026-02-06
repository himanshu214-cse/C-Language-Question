// Write a C program that uses a switch statement to display the name of the day based on the day number entered by the user.

// The program should:

// Prompt the user to enter an integer between 1 and 7.

// Use a switch statement to print the corresponding day of the week:

// 1 → Monday

// 2 → Tuesday

// 3 → Wednesday

// 4 → Thursday

// 5 → Friday

// 6 → Saturday

// 7 → Sunday

// Display "Enter a valid day number." if the input is outside this range.

// Input

// An integer from 1 to 7.

// Output

// The corresponding day name or an error message.

// Example

// Input

// Enter day number: 6


// Output

// Saturday


#include<stdio.h>
int main() {
    int day;
    printf("Enter day number: ");
    scanf("%d", &day);
    switch(day) {
        case 1 : printf("Monday");
        break;
        case 2 : printf("Tuesday");
        break;
        case 3 : printf("Wednesday");
        break;
        case 4 : printf("Thursday");
        break;
        case 5 : printf("Friday");
        break;
        case 6 : printf("Saturday");
        break;
        case 7 : printf("Sunday");
        break;
        default: printf("Enter a valid day number.");
        }
        return 0;
}
