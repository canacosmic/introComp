#include <stdio.h>

int main(){

 int n = 50;
 int i,j = 0;
 int a[n][n]={};

 for (i=0; i<n; i++){
  for (j=0; j<n; j++){
   if (i == j){
    printf("1\n");
   }else {
    printf("0\n");
   }
  }
 }
 printf("\n");
 return 0;
}