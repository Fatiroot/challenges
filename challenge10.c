#include <stdio.h>
#include <stdlib.h>

int main(){
      int a,b,s;
  printf ("entre deux nombre :\n");
  scanf("%d %d", &a , &b);
  if(a!=b){
       s=a+b;
      printf("la somme est : %d\t",s);
  }else{
      s=(a+b)*3;
  printf("la somme est : %d\t",s);
}
return 0;
}
