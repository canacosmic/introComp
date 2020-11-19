#include <stdio.h>

/* Constantes Globales */
const int o = 1;
const int cruz = 2;
const int borde = 3;
const int vacio = 0;

int *tablero;

/* Variables */
int i;

/* Convirtiendo coordenadas */
const int convertirCoords[9] = [6,7,8,11,12,13,16,17,18]; 


/* inicializando nustro tablero ( OJO! void es el return type de la func, este caso no retorna nada) */
void initTablero(int *tablero){

 for (i=0;i<25;i++){
  /* poniedo todo el tablero como borde */
  tablero[i]=borde;
 }

 for (i=0;i<9;i++){
  /* poniendo en 0's las posiciones validas para jugar */
  tablero[convertirCoords[i]]=vacio;
 }
}

/* Funcion para imprimir el tablero */
void imprimirTablero(int *tablero){
 printf("\nTablero:\n");
 for(i=0;i<25;i++){
  /* Imprimir nuevo rengón cada 5 posiciones */
  if (i!=0 && i%5==0){
   pritnf("\n");
  }
  printf("%d", tablero[i]);
 }
 pritnf("\n");
}



int main(){

 int tablero[25];

 /* iniciaizando el tablero */
 initTablero(&tablero[0]);

 
 /* imprimir el tablero */
 imprimirTablero(&tablero[0]);



 return 0;
}