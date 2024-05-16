#include <stdio.h>
int main(void) {
  float num, ant, suc;
  printf("Escreva um número: ");
  scanf ("%f",&num);
  
  ant= num - 1;
  suc= num + 1;
  printf("\nO antecessor é: %.2f",ant);
  printf("\nO sucessor é: %.2f",suc);
 
 return 0;
}