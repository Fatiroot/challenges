#include <stdio.h>
#include <math.h>

int main(){
      int annee;
      printf ("entre une annee:\n");
  scanf("%d", &annee);

   printf("l'annee en moi :%d\n", annee*12 );
   printf("l'annee en jour :%d\n", annee*365 );
   printf("l'annee en heur:%d\n", annee*365*24 );
   printf("l'annee en minute :%d\n", annee*365*24*60 );
    printf("l'annee en minute :%d\n", annee*365*24*60*60 );
return 0;
}
