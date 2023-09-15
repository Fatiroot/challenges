#include <stdio.h>
#include <math.h>

int main(){
      float a,b,c;
      float delta, x, x1,x2;
  printf ("entre trois nombre :\n");
  scanf("%f%f%f", &a, &b, &c);
   printf ("voici l'equation %f*x^2 + %f*x+ %f = 0:\n",a,b,c);
   delta=b*b-4*a*c;
   if(delta==0){
       x=-b/2*a;
       printf ("x=%f\n",x);
            }else if(delta>0){
              x1=(-b + sqrt(delta))/(2*a);
              x2=(-b - sqrt(delta))/(2*a);
              printf ("x=%f\n",x1);
              printf ("x=%f\n",x2);
   }else{
           printf (" n'a pas de solution réelle");
   }

return 0;
}
