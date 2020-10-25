#include <stdio.h>
int main(){

 int n = 50;
 int i = 0;
 int j = 0;
 int a[n][n];

 for (i=0; i<n; i++){
  for (j=0; j<n; j++){
   if (a[i] == a[j]){
    printf("1");
   }else {
    printf("0");
   }
  }
 }
 printf("/n");
 return 0;
}