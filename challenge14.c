#include <stdio.h>
int main(){
      char c ;
      int asci;
      printf ("entre un caracter:\n");
      scanf(" %c", &c);
      asci=(int)c;
      if(asci >=65 && asci <= 90){
         printf("le nombre % c est majuscule", c);

       }else{
            printf("le nombre %d est miniscule", asci);
       }
 return 0;
}
