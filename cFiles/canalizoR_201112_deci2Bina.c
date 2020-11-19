#include<stdio.h>    
#include<stdlib.h>

int main(){
    /* Variables */
    int a[10];
    int n,i;    

    /* Input de usuario */ 
    printf("\nIngrese un numero entero en base 10: ");    
    scanf("%d",&n);


    /* Cuentas */
    for(i=0;n>0;i++){
        /* dividir el numero mediante modulo 2 y guardar el resto en el array */
        a[i]=n%2;
        /* Seguir dividiento por dos hasta que el numero sea mayor a */
        n=n/2;
    }

    /* Imprimiendo el resultado */
    printf("\nEl numero ingresado en binario es:\n",n);


    /* Imprimir el array al reves */
    for(i=i-1;i>=0;i--){
        printf("%d",a[i]);    
    }    
    return 0;
}  