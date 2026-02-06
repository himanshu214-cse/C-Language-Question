#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>96&&ch<123){
        printf("%c",ch-32);
    }
    else{
        printf("Already in upper case");
    }
    return 0;
}
