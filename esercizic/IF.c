#include <stdio.h>
int main(void){
int giorni;
printf("inserisci un numero del giorno: ");
scanf("%d",&giorni);
if(giorni==1)
printf("il giorno è lunedì");
if(giorni==2)
printf("il giorno è martedì");
if(giorni==3);
printf("il giorno è mercoledì");
if(giorni==4)
printf("il giorno è giovedì");
if(giorni==5)
printf("il giorno è venerdì");
if(giorni==6)
printf("il giorno è sabato");
if(giorni==7)
printf("il giorno è domenica");
if(giorni>7)
printf("giorno non valido");
return 0;
}
