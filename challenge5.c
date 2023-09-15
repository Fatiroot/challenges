#include <stdio.h>
#include <stdlib.h>
#include<math.h>
  int main(){
      char p1,p2;
      int a,b,c,d;
      float D;
      printf ("entre les cordonnees de premiere point :\n");
      scanf(" %c", &p1);
      scanf("%d%d",&a, &b);
      printf ("% c(%d,%d)\n",p1,a,b);
      printf ("entre les cordonnees  de deuxieme point :\n");
      scanf(" %c", &p2);
      scanf("%d%d",&c, &d);
      printf ("%c(%d,%d)\n",p2,c,d);
      D=sqrt(pow((c-b), 2)+pow((d-b), 2));
      printf("la distance de deux points est :%f\t",D);
      return 0;
  }
