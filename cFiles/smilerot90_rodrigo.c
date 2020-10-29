#include <stdio.h>
#include <math.h>

int main(){

 int n = 100;

 int matrix[100][100];
 int matrixR90L[100][100];
 int matrixR90R[100][100];
 int matrixR90UD[100][100];
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


   if (d1 < r){
    matrix[i][j]=1;
    }

   else if (d2 < r){
     matrix[i][j]=1;
     }
   

   else if ((i > 55  && i < 75) && (j > 25  && j < 75)) {
    matrix[i][j]=1;
   }else
   {
    matrix[i][j]=0;
   }
  }
 }

 



 for (i=0; i<n; i++){
   for (j=0; j<n; j++){
     
     /* Rotates 90 left:*/
     matrixR90L[i][j] = matrix[j][(n-1)-i];

  }
  printf("\n");
 }


 
 for (i=0; i<n; i++){
   for (j=0; j<n; j++){
     
     /* Upside Down */
     matrixR90UD[i][j] = matrixR90L[j][(n-1)-i]; 
     
   }
   printf("\n");
 }
 
 
 for (i=0; i<n; i++){
   for (j=0; j<n; j++){
     
     /* Rotates 90R */
     matrixR90R[i][j] = matrixR90UD[j][(n-1)-i];
     
   }
   printf("\n");
 }
 
 
 for (i=0; i<n; i++){
   for (j=0; j<n; j++){
     printf("%d  ", matrix[i][j]);
   }
   printf("\n");
 }
   printf("\n");

 for (i=0; i<n; i++){
   for (j=0; j<n; j++){
     printf("%d  ", matrixR90R[i][j]);
   }
   printf("\n");
 }
   printf("\n");

 for (i=0; i<n; i++){
   for (j=0; j<n; j++){
     printf("%d  ", matrixR90L[i][j]);
   }
   printf("\n");
 }

   printf("\n");

 for (i=0; i<n; i++){
   for (j=0; j<n; j++){
     printf("%d  ", matrixR90UD[i][j]);
   }
   printf("\n");
 }
 
 


 
 
 return 0;
}
