#include <stdio.h>

int main(){

 int n = 50;
 int i,j = 0;

 for (i=0; i<n; i++){
  for (j=0; j<n; j++){
   if (i == j){
    printf("1 ");
   }else {
    printf("0 ");
   }
  }
  printf("\n");
 }
 return 0;
}