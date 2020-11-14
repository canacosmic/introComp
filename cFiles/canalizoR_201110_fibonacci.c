#include <stdio.h>


int main() {

 /* Iniciando Variables */
 int i, n;
 int primerTermino = 0;
 int segundoTermino = 1;
 int siguienteTermino;

 /* Input usuario (decide cuantos terminos de la serie quiere)*/
 printf("Ingrese el numero de terminos: ");
 scanf("%d", &n);

 /* Mostrando la serie de n terminos */
 printf("Fibonacci Series: ");
 for (i = 1; i <= n; i++){
  printf("%d, ", primerTermino);

  /* algebra de terminos */
  siguienteTermino = primerTermino + segundoTermino;
  primerTermino = segundoTermino;
  segundoTermino = siguienteTermino;
  }
  return 0;
}