#include <stdio.h>
#include <math.h> 
int main(void) {
  float juros, m, c, i, t, x;
 
  printf("Capital: ");
  scanf("%f", &c);
  printf("Taxa de juros ao ano : ");
  scanf("%f", &i);
  printf("Tempo da aplicação do juros em anos: ");
  scanf("%f", &t);

  m= c*pow((1+(i/100)),t);
  juros = m-c;

  printf("O valor dos juros compostos é: %f", juros);

  return 0;
}