#include <stdio.h>
#include <stdlib.h>

  int main(){
      int a , b , c , d ;
      float somme, moyenne;
      printf ("entre les quatre nombres :\n");
      scanf("%d%d%d%d", &a , &b ,&c , &d);
      somme = a + b + c + d;
      printf ("la somme de %d , %d , %d et ,%d est %f\n" , a , b , c , d , somme);
      moyenne = somme / 4;
      printf ("la moyenne  de %d , %d , %d et %d est %f\n" ,a , b , c , d , moyenne);
     return 0;
}
