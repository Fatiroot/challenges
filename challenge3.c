#include <stdio.h>
#include <stdlib.h>

int main(){
      int a , b;
  printf ("entre deux nombre :\n");
  scanf("%d %d", &a , &b);

  printf ("%d + %d = %d\n", a, b, a + b);
  printf ("%d - %d = %d\n", a, b, a - b);
  printf ("%d * %d = %d\n", a, b, a * b);
  if(b==0){
      printf("error");
  }else{
  printf ("%d / %d = %d\n", a, b, a / b);
  printf ("%d %  %d = %d\n", a, b, a % b);
}
return 0;
}
