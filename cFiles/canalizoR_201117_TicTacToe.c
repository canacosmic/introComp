#include <stdio.h>

/* Variables Globales */
char tablero[10] = {'0','1','2','3','4','5','6','7','8','9'};

/* Declarando funciones */
void creandoTablero();
void llenandoTablero(int, char);
int checarGanador();





int main(){

 /* Variables locales */
 int eleccionHumano;
 int eleccionCompu;
 char marcado;/* 'X' para humano 'O' para compu */
 int jugador = 1;
 int i;
 char continuar;

 i = checarGanador();

 do {

   creandoTablero();

   /* decidiendo jugador */
   if (jugador % 2==1){
     jugador = 1;
   }else{
     jugador = 2;
   }

   /*Jugadas compu*/
   if (jugador == 2){
     printf("presione enter para que la compu tire\n");
     scanf('\0', continuar);
     eleccionCompu = rand()%9;
     marcado = 'O';
     llenandoTablero(eleccionCompu, marcado);
     checarGanador();
     jugador ++;
   }

   /*Jugada de Humano*/
   if (jugador == 1){
     printf("Ingrese la casilla a marcar:");
     scanf("%d", &eleccionHumano);
     marcado = 'X';
     llenandoTablero(eleccionHumano, marcado);
     checarGanador();
     jugador ++;
     }
   } while(i == 2);

   if (i == 0){
     printf("Empate!");
   }else if (i == 1){
     printf("Ha ganado el jugador %d, ¡Felicidades!", jugador);
   }else{
     printf("Hubo un error. reinice el programa y vuelva a jugar");
   }

 return 0;
}





/*** Función: Creando el tablero ***/
void creandoTablero(){
 printf("\n\n");
 printf("     |     |     \n");
 printf(" %c   | %c   | %c   \n",tablero[1],tablero[2],tablero[3]);
 printf("_____|_____|_____\n");
 printf("     |     |     \n");
 printf(" %c   | %c   | %c   \n",tablero[4],tablero[5],tablero[6]);
 printf("_____|_____|_____\n");
 printf("     |     |     \n");
 printf(" %c   | %c   | %c   \n",tablero[7],tablero[8],tablero[9]);
 printf("     |     |     \n");
}

/*** Función: Llenando el tablero ***/
void llenandoTablero(int eleccion, char marcado){
 /* Si se elige la casilla n y si esta disponible, marcar...*/
 if (eleccion==1 && tablero[1]=='1'){
  tablero[1] = marcado;
 }else if (eleccion==2 && tablero[2]=='2'){
  tablero[2] = marcado;
 }else if (eleccion==3 && tablero[3]=='3'){
  tablero[3] = marcado;
 }else if (eleccion==4 && tablero[4]=='4'){
  tablero[4] = marcado;
 }else if (eleccion==5 && tablero[5]=='5'){
  tablero[5] = marcado;
 }else if (eleccion==6 && tablero[6]=='6'){
  tablero[6] = marcado;
 }else if (eleccion==7 && tablero[7]=='7'){
  tablero[7] = marcado;
 }else if (eleccion==8 && tablero[8]=='8'){
  tablero[8] = marcado;
 }else if (eleccion==9 && tablero[9]=='9'){
  tablero[9] = marcado;
 }else {
  printf("Whoops! La casilla elejida no existe.\n");
 }
}

/*** Función: Checar casillas ganadoras ***/


   /* Return 1 para indicar partida ganada */
   /* Return 0 para indicar que ya se llenó el tablero pero sin ganadores (empate) */
   /* Return 2 para indicar que el juego sigue (aun hay casillas disponibles, seguir juego) */
int checarGanador(){
 /* Checando renglones */
 if (tablero[1] == tablero[2] && tablero[2] == tablero[3]){
  return 1;
 }else if (tablero[4] == tablero[5] && tablero[5] == tablero[6]){
  return 1;
 }else if (tablero[7] == tablero[8] && tablero[8] == tablero[9]){
  return 1;
 
 /* Checando columnas */
 }else if (tablero[1] == tablero[4] && tablero[4] == tablero[7]){
  return 1;
 }else if (tablero[2] == tablero[5] && tablero[5] == tablero[8]){
  return 1;
 }else if (tablero[3] == tablero[6] && tablero[6] == tablero[9]){
  return 1;

  /* Checando diagonales*/
 }else if (tablero[1] == tablero[5] && tablero[5] == tablero[9]){
  return 1;
 }else if (tablero[3] == tablero[5] && tablero[5] == tablero[7]){
  return 1;

  /* Si ninguna coincide*/
 }else if (tablero[1] != '1' && tablero[2] != '2' && tablero[3] != '3' && tablero[4] != '4' && tablero[5] != '5' && tablero[6] != '6' && tablero[7] != '7' && tablero[8] != '8' && tablero[9] != '9') {
  return 0;
 }else {
   /* si aun hay casillas disponibles...*/
  return 2; 
 }
}