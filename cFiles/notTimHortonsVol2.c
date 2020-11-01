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
  printf("\n");
  printf("===========================================================================================================================\n");
  printf("\n");
  printf("Escoga el producto deseado.Presione el botón: \n\nA para Café Espresso \n\nB para Americano \n\nC para Capuccino \n\nD para Chocolate​\n​");
  scanf("%c", &eleccion);
  printf("\n");
  printf("===========================================================================================================================\n");
  /* CASO ESPRESSO */
  if (eleccion == espresso){

   /* Cobro */
   printf("\n");
   printf("*** El precio del espresso es de $15 pesos ***\n");
   printf("\n");
   printf("Inserte una a una las monedas en la ranura.\n");
   scanf("%d", &dinero);

   while (dinero < precioEspresso){
    precioEspresso -= dinero;
    printf("\n");
    printf("Inserte %d pesos más\n", precioEspresso);
    scanf("%d", &dinero);

    if (dinero > precioEspresso){
     cambio = dinero - precioEspresso;
     printf("\n");
     printf("--- Su cambio es de $%d pesos ---\n", cambio);
     printf("\n");
     printf("===========================================================================================================================\n");
    }
   }
   /* Preparación de ESPRESSO */
   aguaBank = aguaBank - 28;
   cafeBank = cafeBank -28;
   vasosBank = vasosBank - 1;

   /* Entrega */
   printf("\n");
   printf("Se ha entregado un Espresso.\nGracias por comprar en notTimHortons!\nQue tenga un buen día!\n");
   printf("\n");
   printf("===========================================================================================================================\n");

   /*** CASO AMERICANO ***/
  } else if (eleccion == americano){
   /* Cobro */
   printf("\n");
   printf(" *** El precio de un Café Americano es de $12 ***\n");
   printf("\n");
   printf("Inserte una a una las monedas en la ranura.\n");
   scanf("%d", &dinero);

   while (dinero < precioAmericano){
    precioAmericano -= dinero;
    printf("\n");
    printf("Inserta %d pesos más\n", precioAmericano);
    scanf("%d", &dinero);
    
    if (dinero > precioAmericano){
     cambio = dinero - precioAmericano;
     printf("\n");
     printf(" --- Su cambio es de $%d pesos ---\n", cambio);
     printf("\n");
     printf("===========================================================================================================================\n");
    }
   }
   /* Preparación de Americano*/
   aguaBank = aguaBank - 56;
   cafeBank = cafeBank - 20;
   vasosBank = vasosBank - 1;

   /* Entrega */
   printf("\n");
   printf("Se ha entregado un Café Americano.\nGracias por comprar en notTimHortons!\nQue tenga un buen día!\n");
   printf("\n");
   printf("===========================================================================================================================\n");

   /* CASO CAPU */
  }else if (eleccion == capu){
   /* Cobro */
   printf("\n");
   printf("*** El precio del Capuccino es de $18 ***\n");
   printf("\n");
   printf("Inserte una a una las monedas en la ranura.\n");
   scanf("%d", &dinero);

   while (dinero < precioCapu){
    precioCapu -= dinero;
    printf("\n");
    printf("Inserta %d pesos más\n", precioCapu);
    scanf("%d", &dinero);

    if (dinero > precioCapu){
     cambio = dinero - precioCapu;
     printf("\n");
     printf("--- Su cambio es de $%d pesos ---\n", cambio);
     printf("\n");
     printf("===========================================================================================================================\n");
    }
   }
   /* Preparación de Capuccino */
   aguaBank = aguaBank - 56;
   cafeBank = cafeBank -20;
   lecheBank = lecheBank -25;
   vasosBank = vasosBank - 1;

   /*Entrega*/
   printf("\n");
   printf("Se ha entregado un Capuccino.\nGracias por comprar en notTimHortons!\nQue tenga un buen día!\n");
   printf("\n");
   printf("===========================================================================================================================\n");

   /* CASO COCA */
  }else if (eleccion == cocoa){
   /* Cobro */
   printf("\n");
   printf(" *** El precio del chocolate caliente es de $10 ***\n");
   printf("\n");
   printf("Inserte una a una las monedas en la ranura.\n");
   scanf("%d", &dinero);

   while (dinero < precioCocoa){
    precioCocoa -= dinero;
    printf("\n");
    printf("Inserta %d pesos más\n", precioCocoa);
    scanf("%d", &dinero);

    if (dinero > precioCocoa){
     cambio = dinero - precioCocoa;
     printf("\n");
     printf("--- Su cambio es de $%d pesos ---\n", cambio);
     printf("\n");
    printf("===========================================================================================================================\n");
    }
   }
   /* Preparación de Chocolate */
   aguaBank = aguaBank - 56;
   lecheBank = lecheBank - 25;
   chocoBank = chocoBank - 25;
   vasosBank = vasosBank - 1;

   /*Entrega*/
   printf("\n");
   printf("Se ha entregado un Capuccino.\nGracias por comprar en notTimHortons!\nQue tenga un buen día!\n");
   printf("\n");
   printf("===========================================================================================================================\n");

  }else{
    printf("\n");
    printf("Su eleccion no es valida. Intente de nuevo.\n");
    printf("\n");
    printf("===========================================================================================================================\n");
  }
 return 0;
}