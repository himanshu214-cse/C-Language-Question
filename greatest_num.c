#include<stdio.h>
int main() {
  int num1;
  printf("Enter first number = ");
  scanf("%d",&num1);
  int num2;
  printf("Enter second number = ");
  scanf("%d",&num2);
  if (num1>num2) {
      printf("The greatest number is = %d",num1);
  }
  else {
      printf("The greatest number is = %d",num2);
  }
    return 0;
}