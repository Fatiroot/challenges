#include <stdio.h>

int main() {
    int n ,i, tab[n] , s=0 , max=0;
   printf("enter le nombre de serie : \n");
    scanf("%d",&n);
    for(i=0 ;i<n;i++){
       scanf("%d",&tab[i]);
        if(tab[i]<100 && tab[i]%10==0){
                s=s+tab[i];
             if(max<tab[i]){
                 max=tab[i];
            }
        }

    }
    printf("la somme est %d\n",s);
    printf("le maximum est %d",max);
     return 0;
}
