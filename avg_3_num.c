#include<stdio.h>
int main() {
   float num1;
   printf("Enter num1 = ");
   scanf("%f",&num1);
   float num2;
   printf("Enetr num2 = ");
   scanf("%f",&num2);
   float num3;
   printf("Enter num3 = ");
   scanf("%f",&num3);
   printf("The avg of num1, num2, num3, is = %.2f",(num1+num2+num3)/3);
    return 0;
}