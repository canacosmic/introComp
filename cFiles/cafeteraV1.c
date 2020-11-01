#include​ ​<​stdio.h​> 
#include​ ​<​math.h​>

int​ main(​void​){
 int​ cafemolido=​1000​, azucar=​300​, agua=​3000​, leche=​300​, chocolate=​300​;
 int​ vasos=​30​, md=​15​, mc=​20​, mp=​50​;
 ​char​ eleccion, eleccionazucar;

 char​ espresso=​'A'​, americano=​'B'​, capuccino=​'C'​, cocolate=​'D'​;

 int​ dinero, cambio;

 int​ monedas10=​15​, monedas5=​20​, monedas1=​50​;

 int​ Pespresso=​15​, Pamericano=​12​, Pcapuccino=​18​, Pcocolate=​10​;

printf(​"Escoja el producto deseado. Presione el botón A para café espresso, B para americano, C para capuccino o D para chocolate​\n​"​);
scanf(​"%c"​, &eleccion);

if​ (eleccion==espresso){
 printf(​"El precio del espresso es de $15. Inserte una a una las monedas en la ranura.​\n​"​);
 scanf(​"%d"​, &dinero);
 while​ (dinero<Pespresso){
  Pespresso=Pespresso-dinero;
 printf(​"Inserta $%d pesos más​\n​"​, Pespresso); scanf(​"%d"​, &dinero);
 if​ (dinero>Pespresso){
  cambio=dinero-Pespresso;
  printf(​"La máquina ha devuelto $%d pesos de cambio​\n​"​, cambio);
  }
}

agua=agua-​28​; cafemolido=cafemolido-​28​; vasos=vasos-​1​;
}​else​{
​if​ (eleccion==americano){
printf(​"El precio del americano es de $12. Inserte una a una las monedas en la ranura.​\n​"​);
scanf(​"%d"​, &dinero);
​while​ (dinero<Pamericano){ Pamericano=Pamericano-dinero;
  printf(​"Inserta $%d pesos más​\n​"​, Pamericano); scanf(​"%d"​, &dinero);
  if​ (dinero>Pamericano){
   cambio=dinero-Pamericano;
   printf(​"La máquina ha devuelto $%d pesos de cambio​\n​"​, cambio);
   }
}

agua=agua-​56​; cafemolido=cafemolido-​20​; vasos=vasos-​1​;

}​else​{
 if​ (eleccion==capuccino){
printf(​"El precio del capuccino es de $18. Inserte una a una las monedas en la ranura.​\n​"​);
scanf(​"%d"​, &dinero);

​while​ (dinero<Pcapuccino){
 Pcapuccino=Pcapuccino-dinero;
printf(​"Inserta $%d pesos más​\n​"​, Pcapuccino); scanf(​"%d"​, &dinero);
​if​ (dinero>Pcapuccino){
 cambio=dinero-Pcapuccino;
 printf(​"La máquina ha devuelto $%d pesos de cambio​\n​"​, cambio);
 }
}
agua=agua-​56​; cafemolido=cafemolido-​20​; leche=leche-​25​; vasos=vasos-​1​;
}​else​{
 if​ (eleccion==cocolate){
printf(​"El precio del chocolate es de $10. Inserte una a una las monedas en la ranura.​\n​"​);
scanf(​"%d"​, &dinero);
​while​ (dinero<Pcocolate){
 Pcocolate=Pcocolate-dinero;
 printf(​"Inserta $%d pesos más​\n​"​, Pcocolate);
 scanf(​"%d"​, &dinero);
 ​if​ (dinero>Pcocolate){
  cambio=dinero-Pcocolate;
  printf(​"La máquina ha devuelto $%d pesos de cambio​\n​"​, cambio);
  }
}
agua=agua-​56​;
leche=leche-​25​;
chocolate=chocolate-​25​;
vasos=vasos-​1​;
}
}
}
}
}