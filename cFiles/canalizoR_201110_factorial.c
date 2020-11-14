# include <stdio.h>

/* Prototipo de funcion */
int factorial(int n);

/* Función principal */
int main(){

 /* Inicializando variables locales */
 int n, i;

 /* Pidiendo un numero al usuario */
 printf("Ingrese un número:");
 scanf("%d", &n);

 /* Usando la función factorial */
 printf("El factorial de %d es: %d\n", n, factorial(n));

 return 0;
}

/* Función Factorial */
int factorial(int n){
 if (n == 0){
  return 1;
 }else{
  return n * factorial(n-1);
 }
}