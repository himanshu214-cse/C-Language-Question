Write a C program to find the maximum element in an array.

#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Display array elements
    printf("\nThe Elements are: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    // Assume first element is maximum
    int max = a[0];

    // Find maximum element
    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }

    printf("\nMax Element = %d", max);

    return 0;
}
