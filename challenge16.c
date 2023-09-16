#include <stdio.h>

int main() {
    char c;
    int n;
    printf(" entrer un caracter\n");
    scanf(" %c",&c);
    n=(int)c;
    if(n>=65 && n<=90){
        printf("le caracter %c est majuscule");
           }else if(n>=97 && n<=122){
              printf("le caracter %c est minuscule");
     }else{
            printf("le caracter %c ni majuscule ni minuscule");
        }
    return 0;
}
