#include <stdio.h>
#include <math.h> //sqrt (raiz q) / pow potencia

int main(void) {
float xa,ya,xb,yb;
float distancia;
printf ("Entre com os valores do A <xa ya>: ");
scanf("%f %f", &xa, &ya);
printf("\nEntre com os valores do B <xb yb>: ");
scanf("%f %f", &xb, &yb);

distancia=sqrt(pow(xb-xa,2)+pow(yb-ya,2));
printf("A distância entre os pontos A  e B é de %.2f", distancia );
  return 0;
}