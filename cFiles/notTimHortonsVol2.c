#include <stdio.h>
#include <math.h>

int main(){

/* "Banco" de merca */
  int cafeBank=1000, azucarBank=300, aguaBank=3000, lecheBank=300, chocoBank=300, vasosBank=30;

  /* Banco */
  int money10 = 150, money05 = 100, money01 = 50;
  int num10 = money10/10, num05 = money05/5, num01 = money01/1;
  int dinero, cambio;

  /* Inputs */
  char eleccion;
  
  /* Menú */
  char espresso = 'A';
  char americano = 'B';
  char capu = 'C';
  char cocoa = 'D';

  /* Precios */
  int precioEspresso = 15;
  int precioAmericano = 12;
  int precioCapu = 18;
  int precioCocoa = 10;



  /*** INICIA PROGRAMA ***/
  printf("Escoga el producto deseado.Presione el botón A para café espresso, B para americano, C para capuccino o D para chocolate​.\n​");
  scanf(​"%c"​, &eleccion);

  /* CASO ESPRESSO */
  if (eleccion == espresso){

   /* Cobro */
   printf("El precio del espresso es de $15.\n");
   printf("Inserte una a una las monedas en la ranura.\n");
   scanf("%d", &dinero);

   while (dinero < precioEspresso){
    precioEspresso -= dinero;
    printf("Inserta %d pesos más\n", precioEspresso);
    scanf("%d", &dinero);

    if (dinero > precioEspresso){
     cambio = dinero - precioEspresso;
     printf("Su cambio es de $%d pesos.\n", cambio);
    }
   }
   /* Preparación de ESPRESSO */
   aguaBank = aguaBank - 28;
   cafeBank = cafeBank -28;
   vasosBank = vasosBank - 1;
   /* CASO AMERICANO */
  } else if (eleccion == americano){
   /* Cobro */
   printf("El precio de un café americano es de $12.\n");
   printf("Inserte una a una las monedas en la ranura.\n");
   scanf("%d", &dinero);

   while (dinero < precioAmericano){
    precioAmericano -= dinero;
    printf("Inserta %d pesos más\n", precioAmericano);
    scanf("%d", &dinero);

    if (dinero > precioAmericano){
     cambio = dinero - precioAmericano;
     printf("Su cambio es de $%d pesos.\n", cambio);
    }
   }
   /* Preparación de ESPRESSO */
   aguaBank = aguaBank - 56;
   cafeBank = cafeBank - 20;
   vasosBank = vasosBank - 1;
   /* CASO CAPU */
  }else if (eleccion == capu){
   /* Cobro */
   printf("El precio del capuccino es de $18.\n");
   printf("Inserte una a una las monedas en la ranura.\n");
   scanf("%d", &dinero);

   while (dinero < precioCapu){
    precioCapu -= dinero;
    printf("Inserta %d pesos más\n", precioCapu);
    scanf("%d", &dinero);

    if (dinero > precioCapu){
     cambio = dinero - precioCapu;
     printf("Su cambio es de $%d pesos.\n", cambio);
    }
   }
   /* Preparación de ESPRESSO */
   aguaBank = aguaBank - 56;
   cafeBank = cafeBank -20;
   lecheBank = lecheBank -25;
   vasosBank = vasosBank - 1;
   /* CASO COCA */
  }else if (eleccion == cocoa){
   /* Cobro */
   printf("El precio del chocolate caliente es de $10.\n");
   printf("Inserte una a una las monedas en la ranura.\n");
   scanf("%d", &dinero);

   while (dinero < precioCocoa){
    precioCocoa -= dinero;
    printf("Inserta %d pesos más\n", precioCocoa);
    scanf("%d", &dinero);

    if (dinero > precioCocoa){
     cambio = dinero - precioCocoa;
     printf("Su cambio es de $%d pesos.\n", cambio);
    }
   }
   /* Preparación de ESPRESSO */
   aguaBank = aguaBank - 56;
   lecheBank = lecheBank - 25;
   chocoBank = chocoBank - 25;
   vasosBank = vasosBank - 1;
  }else{
   printf("Su eleccion no es valida. Intente de nuevo.\n");
  }
 return 0;
}