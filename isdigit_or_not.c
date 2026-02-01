#include<stdio.h>
#include<ctype.h>
int main() {
   char ch;
   printf("Enter char = ");
   scanf("%c",&ch);
   if(isdigit(ch)) {
       printf("Entered char is digit\n");
   }
   else {
       printf("Entered char is not a digit");
   }
    return 0;
}