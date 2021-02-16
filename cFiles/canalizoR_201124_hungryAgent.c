#include <stdio.h>

/* Variables Globales */
int i,j, q,r, n=25;
int contador = 0;
int numComidas = 25;
int numParedes = 25;
int agentPoints = 0;
int contadorPasos = 0;
int puntajeGanador = 5;
int randMovPared;
char espacioLibre = '-';
char agente = '@';
char comida = '*';
char pared = '|';
char x,o ;
char arena[25][25];
char copy[25][25];


/* Declarando funciones */
char creandoArena(char espacioLibre, char agente, char comida, char pared);
char analizandoespacios(char x);
void imprimirArena(char o);

int main(){
 srand((unsigned) time(NULL));

 x = creandoArena(espacioLibre, agente, comida, pared);

 while (agentPoints<puntajeGanador){
    o = analizandoespacios(x);
    printf("\n");
    imprimirArena(o);
  }
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

void analizandoespacios(){
  /* Creando matriz de modificaciones (copia de la original)*/
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      copy[i][j] = arena[i][j];
    }
  }

  /* Analisis de indices y reacciones del agente */
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){

      /*** Ubicando al agente en el mapa ***/
      if(arena[i][j] == agente){

        /*** ANALISIS COMIDAS VECINAS ***/
        if(arena[i-1][j] ==comida){
          copy[i-1][j] = agente;
          agentPoints++;
          copy[i][j] = espacioLibre;
          contadorPasos++;
        }else if(arena[i+1][j] == comida){
          copy[i+1][j] = agente;
          agentPoints++;
          copy[i][j] = espacioLibre;
          contadorPasos++;
        }else if(arena[i][j-1] == comida){
          copy[i][j-1] = agente;
          agentPoints++;
          copy[i][j] = espacioLibre;
          contadorPasos++;
        }else if(arena[i][j+1] == comida){
          copy[i][j+1] = agente;
          agentPoints++;
          copy[i][j] = espacioLibre;
          contadorPasos++;
        /*** PAREDES VECINAS ***/
        }else if(arena[i-1][j] == pared){
          randMovPared = rand()%3;
          if (randMovPared == 0){
            copy[i+1][j] = agente;
            contadorPasos++;
          }else if (randMovPared == 1){
            copy[i][j+1] = agente;
            contadorPasos++;
          }else if (randMovPared == 2){
            copy[i][j-1] = agente;
            contadorPasos++;
          }else{
            printf("Hubo un error al elegir el siguiente paso");
          }
          contadorPasos++;



        }else if(arena[i+1][j] == pared){
          randMovPared = rand()%3;
          if (randMovPared == 0){
            copy[i-1][j] = agente;
            contadorPasos++;
          }else if (randMovPared == 1){
            copy[i][j+1] = agente;
            contadorPasos++;
          }else if (randMovPared == 2){
            copy[i][j-1] = agente;
            contadorPasos++;
          }else{
            printf("Hubo un error al elegir el siguiente paso");
          }
          contadorPasos++;




        }else if(arena[i][j-1] == pared){
          randMovPared = rand()%3;
          if (randMovPared == 0){
            copy[i+1][j] = agente;
            contadorPasos++;
          }else if (randMovPared == 1){
            copy[i-1][j] = agente;
            contadorPasos++;
          }else if (randMovPared == 2){
            copy[i][j+1] = agente;
            contadorPasos++;
          }else{
            printf("Hubo un error al elegir el siguiente paso");
          }
          contadorPasos++;


        }else if(arena[i][j+1] == pared){
          randMovPared = rand()%3;
          if (randMovPared == 0){
            copy[i+1][j] = agente;
            contadorPasos++;
          }else if (randMovPared == 1){
            copy[i-1][j] = agente;
            contadorPasos++;
          }else if (randMovPared == 2){
            copy[i][j-1] = agente;
            contadorPasos++;
          /*** ESPACIOS LIBRES ***/ 
          }else{
            randMovPared = rand()%4;
            if (randMovPared == 0){
              copy[i+1][j] = agente;
              contadorPasos++;
            }else if(randMovPared == 1){
              copy[i-1][j] = agente;
              contadorPasos++;
            }else if(randMovPared == 2){
              copy[i][j+1] = agente;
              contadorPasos++;
            }else if(randMovPared == 3){
              copy[i][j-1] = agente;
              contadorPasos++;
            }else{
              printf("Error");
            }
          }
        }
      }
    }
  }
}

void imprimirArena(char o){
 for(i=0;i<n;i++){
  for(j=0;j<n;j++){
    arena[i][j] = copy[i][j];
   printf("%c ", arena[i][j]);
  }
  printf("\n");
 }
}