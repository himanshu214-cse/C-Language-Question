#include<stdio.h>
int main() {
    char ch;
    printf("Enter any ch = ");
    scanf("%c",&ch);
    (ch == 'A'||ch =='E'||ch =='I'||ch =='O'||ch =='U'||ch == 'a'||ch =='e'||ch =='i'||ch =='o'||ch =='u') ? printf("vowel"):printf("cons");
    return 0;
}
