#include <stdio.h>
#include<math.h>
  int main(){
      int n,invers;
      printf ("entrer un nombre :\n" );
      scanf("%d",&n);
      if (n>99 && n<1000){
          int cen=n/100;
          int diaz=(n/10)%10;
          int uni=n%10;
           invers=uni*100+diaz*10+cen;
          printf("l'inverse de ce nombre est : %d\n",invers);
      }

      return 0;
}
