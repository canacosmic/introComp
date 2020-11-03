#include <stdio.h>
#include <math.h>

int main(){
   printf("===========================================================================================================================\n");
   printf("===========================================================================================================================\n");
   printf("(*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n");
   printf("\n");
   printf("notTimHortons Pro Max\n");
   printf("\n");
   printf("Integrantes:\n");
   printf("Fernando Hurtado\n");
   printf("Yael Toribio\n");
   printf("Rodrigo Canalizo\n");
   printf("\n");
   printf("(*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n");
   printf("===========================================================================================================================\n");


/* "Banco" de merca */
  int cafeBank=1000, aguaBank=3000, lecheBank=300, chocoBank=300, vasosBank=30;

  /* Banco */
  int num10 = 15, num05 = 5, num02 = 0, num01 = 10;
  int dinero, cambio, globalmoney;

  /* Inputs */
  int eleccion;
  
  /* Menú */
  int espresso = 1;
  int americano = 2;
  int capu = 3;
  int cocoa = 4;

  /* Precios */
  int precioEspresso = 15;
  int precioAmericano = 12;
  int precioCapu = 18;
  int precioCocoa = 10;

  /*Para dar cambio*/
  int monedade5, monedade1;

while (cafeBank>=20 && aguaBank>=28 && lecheBank>=25 && chocoBank>=25 && vasosBank>=1){

  if ((num05==0 && num01<10) || (num05>=1 && num01==0))
    printf("Por el momento la máquina no cuenta con cambio. Por favor, pague el monto exacto");

  /*** INICIA PROGRAMA ***/
  printf("===========================================================================================================================\n");
  printf("\n");
  printf("Escoja el producto deseado. Presione el botón: \n\n1 para Café Espresso \n\n2 para Americano \n\n3 para Capuccino \n\n4 para Chocolate\n\n");
  scanf("%d", &eleccion);
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

   /* Contador de monedas */
    if (dinero==10)
    num10=num10+1;
    if (dinero==5)
    num05=num05+1;
    if (dinero==2)
    num02=num02+1;
    if (dinero==1)
    num01=num01+1;

    precioEspresso=15;

   while (dinero < precioEspresso){
    precioEspresso -= dinero;
    printf("\n");
    printf("Inserte %d pesos más\n", precioEspresso);
    scanf("%d", &dinero);

    //Contador de monedas
      if (dinero==10)
      num10=num10+1;
      if (dinero==5)
      num05=num05+1;
      if (dinero==2)
      num02=num02+1;
      if (dinero==1)
      num01=num01+1;

    if (dinero > precioEspresso){
     cambio = dinero - precioEspresso;

     //Forma de dar cambio
     monedade5=cambio/5;
     monedade1=cambio-(monedade5*5);

     printf("La máquina devolvió %d moneda de $5 y %d monedas de $1.\n\n", monedade5, monedade1);

     num05=num05-monedade5;
     num01=num01-monedade1;
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
   printf("(*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n");

   /*** CASO AMERICANO ***/
  }else if (eleccion == americano){
   /* Cobro */
   printf("\n");
   printf(" *** El precio de un Café Americano es de $12 ***\n");
   printf("\n");
   printf("Inserte una a una las monedas en la ranura.\n");
   scanf("%d", &dinero);

   if (dinero==10)
   num10=num10+1;
   if (dinero==5)
   num05=num05+1;
   if (dinero==2)
   num02=num02+1;
   if (dinero==1)
   num01=num01+1;
   precioAmericano=12;

   while (dinero < precioAmericano){
    precioAmericano -= dinero;
    printf("\n");
    printf("Inserta %d pesos más\n", precioAmericano);
    scanf("%d", &dinero);

    if (dinero==10)
    num10=num10+1;
    if (dinero==5)
    num05=num05+1;
    if (dinero==2)
    num02=num02+1;
    if (dinero==1)
    num01=num01+1;

    
    if (dinero > precioAmericano){
     cambio = dinero - precioAmericano;

     //Forma de dar cambio
     monedade5=cambio/5;
     monedade1=cambio-(monedade5*5);

     printf("La máquina devolvió %d moneda de $5 y %d monedas de $1.\n\n", monedade5, monedade1);

     num05=num05-monedade5;
     num01=num01-monedade1;
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
   printf("(*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n");

   /* CASO CAPU */
  }else if (eleccion == capu){
   /* Cobro */
   printf("\n");
   printf("*** El precio del Capuccino es de $18 ***\n");
   printf("\n");
   printf("Inserte una a una las monedas en la ranura.\n");
   scanf("%d", &dinero);

   if (dinero==10)
   num10=num10+1;
   if (dinero==5)
   num05=num05+1;
   if (dinero==2)
   num02=num02+1;
   if (dinero==1)
   num01=num01+1;
   precioCapu=18;

   while (dinero < precioCapu){
    precioCapu -= dinero;
    printf("\n");
    printf("Inserta %d pesos más\n", precioCapu);
    scanf("%d", &dinero);

    if (dinero==10)
    num10=num10+1;
    if (dinero==5)
    num05=num05+1;
    if (dinero==2)
    num02=num02+1;
    if (dinero==1)
    num01=num01+1;

    if (dinero > precioCapu){
     cambio = dinero - precioCapu;

      //Forma de dar cambio
     monedade5=cambio/5;
     monedade1=cambio-(monedade5*5);

     printf("La máquina devolvió %d moneda de $5 y %d monedas de $1.\n\n", monedade5, monedade1);

     num05=num05-monedade5;
     num01=num01-monedade1;
     printf("===========================================================================================================================\n");
    }
   }
   /* Preparación de Capuccino */
   aguaBank = aguaBank - 56;
   cafeBank = cafeBank - 20;
   lecheBank = lecheBank - 25;
   vasosBank = vasosBank - 1;

   /*Entrega*/
   printf("\n");
   printf("Se ha entregado un Capuccino.\nGracias por comprar en notTimHortons!\nQue tenga un buen día!\n");
   printf("\n");
   printf("===========================================================================================================================\n");
   printf("(*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n");

   /* CASO COCOA */
  }else if (eleccion == cocoa){
   /* Cobro */
   printf("\n");
   printf(" *** El precio del chocolate caliente es de $10 ***\n");
   printf("\n");
   printf("Inserte una a una las monedas en la ranura.\n");
   scanf("%d", &dinero);

   if (dinero==10)
   num10=num10+1;
   if (dinero==5)
   num05=num05+1;
   if (dinero==2)
   num02=num02+1;
   if (dinero==1)
   num01=num01+1;
   precioCocoa=10;

   while (dinero < precioCocoa){
    precioCocoa -= dinero;
    printf("\n");
    printf("Inserta %d pesos más\n", precioCocoa);
    scanf("%d", &dinero);

    if (dinero==10)
    num10=num10+1;
    if (dinero==5)
    num05=num05+1;
    if (dinero==2)
    num02=num02+1;
    if (dinero==1)
    num01=num01+1;

    if (dinero > precioCocoa){
     cambio = dinero - precioCocoa;

     //Forma de dar cambio
     monedade5=cambio/5;
     monedade1=cambio-(monedade5*5);

     printf("La máquina devolvió %d moneda de $5 y %d monedas de $1.\n", monedade5, monedade1);

     num05=num05-monedade5;
     num01=num01-monedade1;
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
   printf("Se ha entregado un Chocolate Caliente.\nGracias por comprar en notTimHortons!\nQue tenga un buen día!\n");
   printf("\n");
   printf("===========================================================================================================================\n");
   printf("(*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n");

  }
  globalmoney=(num10*10)+(num05*5)+(num02*2)+(num01*1);
    printf("*** REVISIÓN DEL ESTADO ACTUAL: ***\n");

    printf("\n\n- Ingredientes disponibles:\n");

    printf("\n%d gr de café molido \n%d ml de agua \n%d gr de leche en polvo \n%d gr de chocolate en polvo y \n%d vasos.\n", cafeBank, aguaBank, lecheBank, chocoBank, vasosBank);

    printf("\n- En el banco quedan:\n");

    printf("\n%d monedas de 10 \n%d monedas de 5 \n%d monedas de 2 \n%d monedas de 1 \nEl dinero total de la máquina es $%d\n", num10, num05, num02, num01, globalmoney);
  }
  printf("===========================================================================================================================\n");
  printf("\nFuera de servicio :(\n");
  printf("\n");
  printf("===========================================================================================================================\n");
  printf("(*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n");
 return 0;
}
