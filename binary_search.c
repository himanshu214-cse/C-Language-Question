Write a C program to search an element in an array using Binary Search and display its index position.


#include <stdio.h>

int main() {

    int n;

    printf("Enter the size of array = ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements in sorted order = ");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;

    printf("Enter the key = ");
    scanf("%d", &key);

    int beg = 0;
    int end = n - 1;
    int mid;
    int loc = -1;

    // Binary Search
    while(beg <= end) {

        mid = (beg + end) / 2;

        if(arr[mid] == key) {
            loc = mid;
            break;
        }
        else if(key > arr[mid]) {
            beg = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    if(loc == -1) {
        printf("\nElement not found");
    }
    else {
        printf("\nElement found at index %d", loc);
    }

    return 0;
}
