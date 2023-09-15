#include <stdio.h>
#include <stdlib.h>
int main()
{
    float F;
    printf("entrer la temperature en Fahrenheit:\n");
    scanf("%f",&F);
    printf(" la temperature en degre:\n");
    float c=(F-32)/1.8;
    printf("%f\n",c);
    if(c<0){
    printf("tres froid");
       }else if(0<=c && c<=15){
           printf("froid");
       }else if(15<c && c<=40){
         printf("chaude");
     }else{
          printf("tres chaud");
     }
    return 0;
}
