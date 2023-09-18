#include <stdio.h>

int main() {
  int n, inverse=0;
  printf("entrerun nombre : \n");
  scanf("%d",&n);
 while(n!=0){
     inverse =inverse * 10 +(n%10);
     n=n/10;
 }
 printf("l'inverse de nombre est :%d",inverse);
  return 0;
  }
