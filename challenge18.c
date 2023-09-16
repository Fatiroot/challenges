#include <stdio.h>
#include <stdlib.h>
int main() {
   char*j[]={"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimance"};
   int jouralt=srand()%7;
    printf("Jour aleatoire : %s\n", j[jouralt]);
    return 0;
}
