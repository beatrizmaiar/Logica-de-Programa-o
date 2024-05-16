#include <stdio.h>

int main(void) {
  int tempo, seg, min, hora;
  printf(" Escreva o tempo em segundos: %.d", tempo);
  scanf("%d", &tempo);

  hora = tempo/3600;
  min = (tempo%3600)/60;
  seg = (tempo%3600)%60;
  

printf("\nTempo em horas %.d h", hora);
printf("\nTempo em minutos %.d min", min);
printf("\nTempo em segundos %.d seg", seg );
 
  return 0;
}