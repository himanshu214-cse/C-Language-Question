
#include<stdio.h>
#include<ctype.h>
int main() {
    char ch;
    printf("Enter any char : ");
    scanf("%c",&ch);
    if(isupper(ch)){
        printf("char is upper");
    }
    else{
        printf("char is lower");
    }
    return 0;
}
