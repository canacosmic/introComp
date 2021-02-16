/* crear arreglo
llenar 
ordenar
preguntar que nnumero busco
print pos 
O
print no está */


#import <stdio.h>


int main(){
 int n = 100;
 int a[100];
 int i;

 for(i=0; i<n; i++){
  a[i] = rand() % 10000;
 }

 printf("El arreglo no ordenado es: \n");
 
 for(i = 0; i<n; i++){
  printf("%d ", a[i]);

 buubleSort
 }
}


// A function to implement bubble sort 
void bubbleSort(int arr[], int n){ 
 int i, j; 
 for (i = 0; i < n-1; i++){
 // Last i elements are already in place    
  for (j = 0; j < n-i-1; j++){  
   if (arr[j] > arr[j+1]) 
   swap(&arr[j], &arr[j+1]);
  } 
 }
} 
  