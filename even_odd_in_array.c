Write a C program to find the sum of even and odd numbers in an array.

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements = ");
    scanf("%d", &n);

    int array[n];

    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int sumEven = 0;
    int sumOdd = 0;

    // Find sum of even and odd numbers
    for(int i = 0; i < n; i++) {
        if(array[i] % 2 == 0) {
            sumEven = sumEven + array[i];
        }
        else {
            sumOdd = sumOdd + array[i];
        }
    }

    printf("Sum of even numbers = %d\n", sumEven);
    printf("Sum of odd numbers = %d", sumOdd);

    return 0;
}
