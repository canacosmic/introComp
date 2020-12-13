#include <stdio.h>

int main(){

    /* Declarando variables locales */
    int const n = 25;
    int const ciclos = 25;
    int pro[n][n];
    int temp[n][n];
    int i,j,x,y;
    int vecino;
    int fila = 25;
    int col = 25;



    /* Llenando la matriz inicial */
    srand((unsigned) time(NULL));
    for (i = 0; i < n; i ++){
        for (j = 0; j < n; j ++){
            pro[i][j] = rand() % 2;
        }
    }
    /* INICA MEGA CICLO */
    for(i = 0; i < ciclos; i++){
        
        for(fila = 0; fila < n; fila++){
            for(col = 0; col < n; col++){
                temp[fila][col] = 0;
            }
        }

        /* Comenzando a analizar indices */
        for(fila = 0; fila < n; fila++){
            for(col = 0; col < n; col++){

                /* PROBLEM con el if!!! analizando los vecinos */
                vecino = /* Aqui agregar suma de indices */;

                /* Condiciones iterando sobre cada indice (checando si esta viva o no) */
                if(pro[fila][col] == 1){
                    if(vecino < 2 || vecino > 3){
                        temp[fila][col] = 0;
                    }else{
                        temp[fila][col] = 1;
                    }
                }else if(pro[fila][col] == 0){
                    if(vecino >= 3){
                        temp[fila][col] = 1;
                    }else{
                        temp[fila][col] = 0;
                    }
                }
            }
        }
        /* Imprimiendo la matriz (cada vez qu se cumple un ciclo)*/
        for(fila = 0; fila < n; fila++){
            for(col = 0; col < n; col++){
                pro[fila][col] = temp[fila][col];
                printf("%d", pro[fila][col]);
            }

            printf("\n");
        }
        printf("\n");
    }
    return 0;
}