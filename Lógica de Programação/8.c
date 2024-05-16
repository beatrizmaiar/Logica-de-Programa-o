#include "stdio.h"
int main(void) {
  float sexo, homem, mulher, alt, ph, pm;
  printf("Digite 1 para homem ou 2 para mulher: ");
  scanf("%f", &sexo);
  printf("Digite sua altura: ");
  scanf("%f", &alt);
  
  homem = 1;
  mulher = 2;
  pm=((621/10)*alt)-(447/10);
  ph=((727/10)*alt)-58;

  sexo == 1 ?  printf("O seu peso ideal é %2.f", ph) : printf("O seu peso ideal é %2.f", pm);
  
return 0;
}