#include <stdio.h>
#include <math.h>

int main(){

 int n = 100;
 int matrix[n][n];
 int matrixRot[n][n];
 int i,j;

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

   if (d1 < r){
    matrix[i][j] = 1;
   }else {
    matrix[i][j] = 0;
   }

   if (d2<r){
     matrix[i][j]=1;
   }else {
    matrix[i][j]=0;
   }

   if ((i > 55  && i < 75) && (j > 25  && j < 75)) {
    matrix[i][j]=1;
   }else{
    matrix[i][j]=0;
   }
  }
  printf("\n");
 }
 return 0;
}