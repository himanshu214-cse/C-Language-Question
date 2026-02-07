// Write a C program that uses a user-defined function to calculate the price of an item after adding GST.

// The program should:

// Ask the user to enter the actual value of an item.

// Pass the value to a function calculate_gst(n).

// Inside the function, calculate the final price after adding 18% GST using:

// Display the final price up to two decimal places.

// Input

// A floating-point number representing the actual value of the item.

// Output

// Price of the item after adding GST.

// Example

// Input

// Enter actual value = 1000


// Output

// Value with gst = 1180.00


#include<stdio.h>
void calculate_gst(float n);
int main(){
    float n;
    printf("Enter actual value = ");
    scanf("%f",&n);
    calculate_gst(n);
    return 0;
}
void calculate_gst(float n){
    printf("Value with gst = %.2f",(n+(n*18)/100));
}


