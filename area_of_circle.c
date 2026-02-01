#include<stdio.h>
int main() {
    float radi;
    printf("Enter radius :");
    scanf("%f", &radi);
    float pi = 3.14;
    float area = 2*pi*radi;
    printf("The area of the circle is : %f", area);
    return 0;
}