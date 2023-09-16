#include <stdio.h>

int main() {
    int n ,i, c=0 ;
   printf("enter le nombre : \n");
    scanf("%d",&n);
     for(i=1 ; i<=100 ; i++){
        if(n%i==0){
           c++;
     }}
     if(c==2){
         printf("nombre premier");
     }else{
          printf("nombre n'est pas premier");
     }
     return 0;
}
