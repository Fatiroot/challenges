#include <stdio.h>
#include <math.h>

int main(){
      int n;
      printf ("entre un nombre:\n");
  scanf("%d", &n);
  if(n>0){
      printf("le nombre %d est positif", n);
       }else  if(n<0){
      printf("le nombre %d est negatif", n);
  }else{
      printf("le nombre %d est null", n);
  }
return 0;
}
