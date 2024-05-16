#include <stdio.h>

int main(void) {
  int ano, abis, abis1;
  printf("Escreva um ano: ");
  scanf("%d", &ano);

  abis= ( ano%4==0 && ano%100!= 0 );
  abis1 =(ano % 400 == 0);
  ano==abis ? printf("O ano é bissexto! %.d", abis) : printf("O ano não é bissexto!") ;
  ano==abis1 ? printf("O ano é bissexto %.d", abis1) : printf("O ano não é bissexto");
        
return 0;
}