#include <stdio.h>
#include <math.h>

int main(){

 int n = 50;
 int i, j = 0;

 /* Centred on: */
 int x = 30;
 int y = 34;

 /* With radius: */
 double r = 5.0;

/* Filling in: */
 for (i=0; i<n; i++){
  for (j=0; j<n; j++){
   double d = sqrt(pow(x-i, 2) + pow(y-j,2));
   if (d < r){
    printf("R ");
   }else {
    printf("- ");
   }
  }
  printf("\n");
 }
 return 0;
}