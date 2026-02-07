// Write a C program that calculates the area of different shapes using user-defined functions.

// The program should:

// Ask the user to choose a shape:

// c → Circle

// s → Square

// r → Rectangle

// Based on the choice, take the required dimensions as input.

// Call the appropriate function to calculate the area:

// area_circle(r) → Area = π × r²

// area_square(x) → Area = side × side

// area_rectangle(l, b) → Area = length × breadth

// Display the calculated area up to two decimal places.

// Input

// A character indicating shape choice

// Required dimensions depending on the shape

// Output

// The area of the selected shape.

// Example

// Input

// Which shape area do you want to find — c for circle, s for square, or r for rectangle? s
// Enter the side = 5


// Output

// The area of square is 25.00


#include<stdio.h>
void area_square(float x);
void area_circle(float r);
void area_rectangle(float l, float b);
int main(){
    char ch;
    printf("Which shape area do you want to find — c for circle, s for square, or r for rectangle? ");
    scanf("%c",&ch);
    if(ch=='c'||ch=='C'){
        float r;
        printf("Enter the radius = ");
        scanf("%f",&r);
        area_circle(r);
    }
    else if(ch=='s'||ch=='S'){
        float x;
        printf("Enter the side = ");
        scanf("%f",&x);
        area_square(x);
    }
    else if(ch=='r'||ch=='R'){
        float l,b;
        printf("Enter l and b = ");
        scanf("%f %f",&l,&b);
        area_rectangle(l,b);
    }
    else{
    printf("Invalid choice");
    }
    return 0;
}
void area_square(float x){
    printf("The area of square is %.2f",x*x);
}
void area_circle(float r){
    printf("The area of circle is %.2f",3.14*r*r);
}
void area_rectangle(float l, float b){
    printf("The area of rectangle is %.2f",l*b);
}
