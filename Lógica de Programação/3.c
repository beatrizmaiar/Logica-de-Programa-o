#include <stdio.h>
#include <math.h>

int main(){
  int num, par, ímpar;
  printf("Escreva um número: ");
  scanf("%d", &num);

  par= num%2;
  
  num%2 ==0 ? printf("O número é par! %.d", par) : printf("O número é ímpar! ");

return 0;
}