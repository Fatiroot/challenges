#include <stdio.h>

int main() {
    int j,m,a;
    printf("entrer une date\n");
    scanf("%d%d%d",&j,&m,&a);
    printf("la date est : %d/%d/%d\n",j,m,a);
    switch(m){
        case 1 :
          printf("la date est : %d-janvier-%d\n",j,a);
          break;
        case 2 :
          printf("la date est : %d-fevrier-%d\n",j,a);
          break;
        case 3 :
          printf("la date est : %d-mars-%d\n",j,a);
          break;
        case 4 :
          printf("la date est : %d-avril-%d\n",j,a);
          break;
          case 5 :
          printf("la date est : %d-mai-%d\n",j,a);
          break;
        case 6 :
          printf("la date est : %d-juin-%d\n",j,a);
          break;
        case 7 :
          printf("la date est : %d-juillet-%d\n",j,a);
          break;
        case 8 :
          printf("la date est : %d-aout-%d\n",j,a);
          break;
        case 9 :
          printf("la date est : %d-septembre-%d\n",j,a);
          break;
        case 10 :
          printf("la date est : %d-octobre-%d\n",j,a);
          break;
        case 11 :
          printf("la date est : %d-novembre-%d\n",j,a);
          break;
        case 12 :
          printf("la date est : %d-decembre-%d\n",j,a);
          break;
        default :
          printf("la date n'existe pas");
    }
    return 0;
}
