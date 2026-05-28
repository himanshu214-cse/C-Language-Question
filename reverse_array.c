Write a C program to reverse an array using a function.



#include <stdio.h>

// Function declarations
void reverse(int arr[], int n);
void printarr(int arr[], int n);

int main() {

    int arr[] = {1, 2, 3, 4, 5};

    // Reverse array
    reverse(arr, 5);

    // Print reversed array
    printarr(arr, 5);

    return 0;
}

// Function to print array
void printarr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
}

// Function to reverse array
void reverse(int arr[], int n) {

    for(int i = 0; i < n / 2; i++) {

        int fv = arr[i];
        int sv = arr[n - i - 1];

        arr[i] = sv;
        arr[n - i - 1] = fv;
    }
}
