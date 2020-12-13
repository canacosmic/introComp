#include <stdio.h>

/* Variables Globales */
int i,j, q,r, n=25;
int contador = 0;
int numComidas = 25;
int numParedes = 25;
int agentPoints = 0;
int contadorPasos = 0;
int puntajeGanador = 5;
char espacioLibre = '-';
char agente = '@';
char comida = '*';
char pared = '|';
char x;
char arena[25][25];
char copy[25][25];


/* Declarando funciones */
char creandoArena(char espacioLibre, char agente, char comida, char pared);
char analizandoespacios(char x);
void imprimirArena(char x);

int main(){
 srand((unsigned) time(NULL));

 x = creandoArena(espacioLibre, agente, comida, pared);

 /* While puntaje < PuntajeWin*/
 analizandoespacios(x);

 imprimirArena(x);
/*fin while*/
/*Printf(felicidades el agente completó su mision!\n)*/
/*Printf(En esta ocasión lo logró en %d movimientos*/


 return 0;
}

/* Funciones */

char creandoArena(char espacioLibre, char agente, char comida, char pared){
 for(i=0;i<n;i++){
  for(j=0;j<n;j++){
   arena[i][j] = espacioLibre;
  }
 }
 /* Agregando agente*/
 q = rand()%n;
 r = rand()%n;
 if(arena[q][r] == espacioLibre){
  arena[q][r] = agente;
 }

 /* Agregando comidas */
 while (contador < numComidas){
  q = rand()%n;
  r = rand()%n;
  if(arena[q][r] == espacioLibre){
   arena[q][r] = comida;
   }
 contador++; 
 }
 /* Reiniciando contador*/
 contador = 0;

 /* Agregando paredes*/
 while (contador < numParedes){
  q = rand()%n;
  r = rand()%n;
  if(arena[q][r] == espacioLibre){
   arena[q][r] = pared;
   }
 contador++; 
 }
 /* Reiniciando contador*/
 contador = 0;
}

char analizandoespacios(char x){

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      copy[i][j]=arena[i][j];
    }
  }

  /* Analizis de indices y reacciones del agente */
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){

      /*** Ubicando al agente en el mapa ***/
      if(arena[i][j]==agente){

        /*** Checar entorno COMIDA y acción ***/
        if(arena[i-1][j]==comida){
          arena[i-1][j] = agente;
          agentPoints++;
          arena[i][j] = espacioLibre;
          contadorPasos++;
        }
        if(arena[i+1][j] == comida){
          arena[i+1][j] = agente;
          agentPoints++;
          arena[i][j] = espacioLibre;
          contadorPasos++;
        }
        if(arena[i][j-1] == comida){
          arena[i][j-1] = agente;
          agentPoints++;
          arena[i][j] = espacioLibre;
          contadorPasos++;
        }
        if(arena[i][j+1] == comida){
          arena[i][j+1] = agente;
          agentPoints++;
          arena[i][j] = espacioLibre;
          contadorPasos++;
        }

        /*** Checar entorno PARED y acción ***/
        if(arena[i-1][j] == pared){
          /* 
          Movimientos validos:
          [i+1][j]
          [i][j+1]
          [i][j-1]
          */
          /* contador de pasos++ */
        }
        if(arena[i+1][j] == pared){
          /* 
          Movimientos validos:
          [i-1][j]
          [i][j+1]
          [i][j-1]
          */
          /* contador de pasos++ */
        }
        if(arena[i][j-1] == pared){
          /* 
          Movimientos validos:
          [i+1][j]
          [i-1][j]
          [i][j+1]
          */
          /* contador de pasos++ */
        }
        if(arena[i][j+1] == pared){
          /* 
          Movimientos validos:
          [i+1][j]
          [i-1][j]
          [i][j-1]
          */
         /* Contador de pasos++ */
        }
        /*Else...(si es espacio libre...)*/
      }
    }
  }
}


void imprimirArena(char x){
 for(i=0;i<n;i++){
  for(j=0;j<n;j++){
   printf("%c ", arena[i][j]);
  }
  printf("\n");
 }
}