#include <stdio.h>

int main(){
 /* Variables locales */
 char original[10][10];
 char copia[25][25];
 char espacioLibre = '-';
 char espacioVisitado = '.';
 char agente ='@';
 char comida = '*';
 char pared = '|';
 int i,j,q,r,n=10;
 int numComidas = n;
 int numParedes = n;
 int randMovPared;
 int agentPoints = 0;
 int contador = 0;
 int contadorPasos = 0;
 int fila, columna;

 /* Matriz inicial */
 srand((unsigned) time(NULL));
 for(i=0;i<n;i++){
  for(j=0;j<n;j++){
   original[i][j] = espacioLibre;
   }
 }
 /* Agregando agente*/
 q = rand()%n;
 r = rand()%n;
 if(original[q][r] == espacioLibre){
  original[q][r] = agente;
 }

 /* Agregando comidas */
 while (contador < numComidas){
  q = rand()%n;
  r = rand()%n;
  if(original[q][r] == espacioLibre){
   original[q][r] = comida;
   }
 contador++; 
 }
 /* Reiniciando contador*/
 contador = 0;

 /* Agregando paredes*/
 while (contador < numParedes){
  q = rand()%n;
  r = rand()%n;
  if(original[q][r] == espacioLibre){
   original[q][r] = pared;
   }
 contador++; 
 }
 /* Reiniciando contador*/
 contador = 0;

 /* Inicia mega ciclo */
 /*numero de ciclos...Despues cambiar a un while*/
 for (i=0;i<n;i++){

  /* Creando matriz copia para hacer mods */
  for(fila = 0; fila<n; fila++){
   for(columna = 0; columna<n; columna++){
    copia[fila][columna] = original[fila][columna];
   }
  }

  /* Comenzando a analizar los idnices validos 4 each case */
  for(fila = 0; fila<n; fila++){
   for(columna = 0; columna<n; columna++){

    /* Ubicando el agente */
    if(original[fila][columna] == agente){

     /* checar COMIDAS entonrno y mover */
     if(original[fila-1][columna] == comida){
      copia[fila-1][columna] = agente;
      agentPoints++;
      copia[fila][columna] = espacioVisitado;
      contadorPasos++;
      
     }else if(original[fila+1][columna] == comida){
      copia[fila+1][columna] = agente;
      agentPoints++;
      copia[fila][columna] = espacioVisitado;
      contadorPasos++;
     }else if(original[fila][columna-1] == comida){
      copia[i][j-1] = agente;
      agentPoints++;
      copia[fila][columna] = espacioVisitado;
      contadorPasos++;
     }else if(original[fila][columna+1] == comida){
      copia[fila][columna+1] = agente;
      agentPoints++;
      copia[fila][columna] = espacioVisitado;
      contadorPasos++;
      /* checar Paredes entorno y mover */
     }else if(original[fila-1][columna] == pared){
      randMovPared = rand()%3;
      if (randMovPared == 0){
       copia[fila+1][columna] = agente;
       contadorPasos++;
       copia[fila][columna] = espacioVisitado;
      }else if (randMovPared == 1){
       copia[fila][columna+1] = agente;
       contadorPasos++;
       copia[fila][columna] = espacioVisitado;
      }else if (randMovPared == 2){
       copia[fila][columna-1] = agente;
       contadorPasos++;
       copia[fila][columna] = espacioVisitado;
      }else{
       printf("Hubo un error al elegir el siguiente paso");
      }
      contadorPasos++;
     }else if(original[fila+1][columna] == pared){
      randMovPared = rand()%3;
      if (randMovPared == 0){
       copia[fila-1][columna] = agente;
       contadorPasos++;
       copia[fila][columna] = espacioVisitado;
      }else if (randMovPared == 1){
       copia[fila][columna+1] = agente;
       contadorPasos++;
       copia[fila][columna] = espacioVisitado;
      }else if (randMovPared == 2){
       copia[fila][columna-1] = agente;
       contadorPasos++;
       copia[fila][columna] = espacioVisitado;
      }else{
       printf("Hubo un error al elegir el siguiente paso");
      }
      contadorPasos++;
     }else if(original[fila][columna-1] == pared){
      randMovPared = rand()%3;
      if (randMovPared == 0){
       copia[fila+1][columna] = agente;
       contadorPasos++;
       copia[fila][columna] = espacioVisitado;
      }else if (randMovPared == 1){
       copia[fila-1][columna] = agente;
       contadorPasos++;
       copia[fila][columna] = espacioVisitado;
      }else if (randMovPared == 2){
       copia[fila][columna+1] = agente;
       contadorPasos++;
       copia[fila][columna] = espacioVisitado;
      }else{
       printf("Hubo un error al elegir el siguiente paso");
      }
      contadorPasos++;
     }else if(original[fila][columna+1] == pared){
      randMovPared = rand()%3;
      if (randMovPared == 0){
       copia[fila+1][columna] = agente;
       contadorPasos++;
       copia[fila][columna] = espacioVisitado;
      }else if (randMovPared == 1){
       copia[fila-1][columna] = agente;
       contadorPasos++;
       copia[fila][columna] = espacioVisitado;
      }else if (randMovPared == 2){
       copia[fila][columna-1] = agente;
       contadorPasos++;
       copia[fila][columna] = espacioVisitado;
      }
     }else{
      randMovPared = rand()%4;
      if (randMovPared == 0){
       copia[fila+1][columna] = agente;
       contadorPasos++;
       copia[fila][columna] = espacioVisitado;
      }else if(randMovPared == 1){
       copia[fila-1][columna] = agente;
       contadorPasos++;
       copia[fila][columna] = espacioVisitado;
       }else if(randMovPared == 2){
        copia[fila][columna+1] = agente;
        contadorPasos++;
        copia[fila][columna] = espacioVisitado;
       }else if(randMovPared == 3){
        copia[fila][columna-1] = agente;
        contadorPasos++;
        copia[fila][columna] = espacioVisitado;
       }else{
        printf("Error");
       }
      }
    }
   }
  }
  for(fila = 0; fila<n; fila++){
   for (columna = 0; columna<n; columna++){
    original[fila][columna] = copia[fila][columna];
    printf("%c ", original[fila][columna]);
   }
   printf("\n");
  }
  printf("\n");
 }
 return 0;
}