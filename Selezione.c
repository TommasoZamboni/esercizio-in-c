#include <stdio.h>
int main(void){
int giorni;
printf("inserisci un numero del giorno: ");
scanf("%d",&giorni);
switch(giorni){
case 1:printf("il giorno è lunedì");break;
case 2:printf("il giorno è martedì");break;
case 3:printf("il giorno è mercoledì");break;
case 4:printf("il giorno è giovedì");break;
case 5:printf("il giorno è venerdì");break;
case 6:printf("il giorno è sabato");break;
case 7:printf("il giorno è domenica");break;
default:printf("giorno non valido");break;
}
return 0;
}
