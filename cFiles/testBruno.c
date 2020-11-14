#include <stdio.h>

int main(){

 int listNum[5], i;
 int suma = 0;

 /* Pidiendo los 5 numeros en una lista  */

 for (i=0, i<5,i++){
  printf("Ingrese separado por comas 5 numeros:");
 scanf("%d", listNum[i]);
 }

 for (i=0,i<5,i++){
  suma = 0;
  if listNum[i] % 2 == 0{
   suma = suma + listNum[i];
  }
  printf("la suma de los numeros pares es %d", suma);
 }

 return 0;
}