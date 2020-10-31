#include <stdio.h>
#include <math.h>

int main(){

 int n = 100;

 int matrix[100][100];
 int matrixR90L[100][100];
 int matrixR90R[100][100];
 int matrixR90UD[100][100];
 int unMedio[50][50];
 int i,j=0;

 /* Circle 1: Centred on: */
 int x1 = 25;
 int y1 = 25;

 /* Circle 2: Centred on: */
 int x2 = 25;
 int y2 = 75;

 /* Both With Radius: */
 double r = 10.0; 

/* Filling in: */
 for (i=0; i<n; i++){
  for (j=0; j<n; j++){
   double d1 = sqrt(pow(x1-i, 2) + pow(y1-j,2));
   double d2 = sqrt(pow(x2-i, 2) + pow(y2-j,2));


    /* First circle */
    if (d1 < r){
    matrix[i][j]=1;
    }
   /* Second circle */ 
   else if (d2 < r){
     matrix[i][j]=1;
     }
   
    /* Rectangle */
   else if ((i > 55  && i < 75) && (j > 25  && j < 75)) {
    matrix[i][j]=1;
   }else{
    matrix[i][j]=0;
   }
  }
 }

/* TRANSFORMING */

 /* Rotating 90º left */ 
 for (i=0; i<n; i++){
   for (j=0; j<n; j++){
     matrixR90L[i][j] = matrix[j][(n-1)-i];
  }
  printf("\n");
 } 

 /* Rotating 180º */ 
 for (i=0; i<n; i++){
   for (j=0; j<n; j++){
     matrixR90UD[i][j] = matrixR90L[j][(n-1)-i];   
   }
   printf("\n");
 }
 
 /* Rotating 90R */
 for (i=0; i<n; i++){
   for (j=0; j<n; j++){
     matrixR90R[i][j] = matrixR90UD[j][(n-1)-i];
   }
   printf("\n");
 }

 /*  Reducing by 1/2 */
 for (i=0;i<50;i+=2){
   for (j=0;j<50;j+=2){
     int prom = 0, sum = 0;
     prom = (matrix[i][j] + matrix[i+1][j] + matrix[i+1][j+1] + matrix[i][j+1])/4;
     unMedio[i/2][j/2] = prom;
   }
   printf("\n");
 }
 
 /* PRINTING */

 /* Printing normal figure */
 for (i=0; i<n; i++){
   for (j=0; j<n; j++){
     printf("%d  ", matrix[i][j]);
   }
   printf("\n");
 }

   printf("\n");

 /* Prtinting Figure rotated 90º R */ 
 for (i=0; i<n; i++){
   for (j=0; j<n; j++){
     printf("%d  ", matrixR90R[i][j]);
   }
   printf("\n");
 }

   printf("\n");

 /* Printing Figure rotaded 90º L */ 
 for (i=0; i<n; i++){
   for (j=0; j<n; j++){
     printf("%d  ", matrixR90L[i][j]);
   }
   printf("\n");
 }

   printf("\n");


 /* Printing Figure Upside Down */ 
 for (i=0; i<n; i++){
   for (j=0; j<n; j++){
     printf("%d  ", matrixR90UD[i][j]);
   }
   printf("\n");
 }

   printf("\n");
  

 /* Printing half the size */
 for (i=0; i<50; i++){
   for (j=0; j<50; j++){
     printf("%d  ", unMedio[i][j]);
   }
   printf("\n");
 }

 return 0;
}
