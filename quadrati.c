#include <stdio.h>
#include <string.h>
int main(){
  int  numero;
  printf("inserisci un numero maggiore di 3:\n");
  scanf("%d", numero);
  while (numero<3)
  {
      printf("reinserisci il valore:\n");
      scanf("%d", numero);
  }
  for(int i=0;i<numero;i++)
  {
  printf("*");
  }
  for (int i = 0; i < numero; i++)
  {
    printf("*");
    printf(" ");
    printf("*\n");
  }
  for(int i=0;i<numero;i++)
  {
  printf("*");
  }
 return 0;
}
