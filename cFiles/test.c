#include <stdio.h>
#include <math.h>

int main(){
 
 int x = 20;
 int m[x][x];
 int i,j = 0;

 for (i=0;i<x;i++){
  for (j=0;j<x;j++){
   // llenar:
   m[i][j] = 0;
  }
 }
 /* Imprimir:*/
 for (i=0;i<x;i++){
  for (j=0;j<x;j++){
   /*imprimir:*/
   printf("%d  ", m[i][j]);  
  }
  printf("\n");
 }


 return 0;
}