#include <stdio.h>
#include <math.h>

int main(void) {
  float peso, altura, IMC;
  printf("Escreva o seu peso: ");
  scanf("%f", &peso);
  printf("Escreva sua altura em metros: ");
  scanf("%f", &altura);

  IMC= peso/(pow(altura,2));
 (IMC < 18.5) ? printf("abaixo do peso") : (IMC > 40) ? printf("obesidade grau 3 ou mórbida") : (IMC >= 35) ? printf("obesidade grau 2") : (IMC >= 30) ? printf("obesidade grau 1") :  (IMC >= 25) ? printf("sobrepeso"): printf("peso normal");
        
return 0;
}