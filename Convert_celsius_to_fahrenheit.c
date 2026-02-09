// Write a C program that converts temperature from Celsius to Fahrenheit using a user-defined function.

// The program should:

// Prompt the user to enter a temperature value in Celsius.

// Pass the value to a function convert_temp(n).

// Inside the function, calculate the Fahrenheit value using the formula:

// Return the result and display it formatted to two decimal places.

// Input

// A floating-point value representing temperature in Celsius.

// Output

// The equivalent temperature in Fahrenheit.

// Example

// Input

// Enter celsius = 30


// Output

// 30.00 degree Celsius is 86.00 degree Fahrenheit





#include<stdio.h>
float convert_temp(float n);
int main(){
    float n;
    printf("Enter celsius = ");
    scanf("%f",&n);
    printf("%.2f degree Celsius is %.2f degree Fahrenheit", n, convert_temp(n));
    return 0;
}
float convert_temp(float n){
    float far = n*(9.0/5.0) + 32;
    return far;
}
