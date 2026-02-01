#include<stdio.h>
int main() {
    int length;
    printf("Enter the length = ");
    scanf("%d",&length);
    int width;
    printf("Enter the width = ");
    scanf("%d",&width);
    printf("The parameter of the rectengle is = %d", 2*(length+width));
    return 0;
}