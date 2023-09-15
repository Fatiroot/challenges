#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nom[20];
    char prenom[20];
    char sexe[20];
    int age, tele;
    printf("entrer votre nom : \n");
    scanf("%s", &nom);
    printf("entrer votre prenom :\n");
    scanf("%s", &prenom);
    printf("entrer votre age : \n");
    scanf("%d", &age);
    printf("entrer votre sexe : \n");
    scanf("%s", &sexe);
    printf("entrer votre numero_tele : \n");
    scanf("%d", &tele);
    printf("les informations personneles sont : \n");
    printf("nom : %s\n", nom);
    printf("prenom : %s\n",prenom);
    printf("age : %d\n", age);
    printf("sexe : %s\n", sexe);
    printf("tele : %d\n", tele);

return 0;
}
