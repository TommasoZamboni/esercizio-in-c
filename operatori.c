#include <stdio.h>
int main(){
    int risultato;
    scanf("%d", &risultato);
    (risultato>=0) ? printf("voto positivo\n")
            : printf("voto negativo\n");
    return 0;
}
