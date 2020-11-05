#include <string.h>
#include <stdio.h>

 
int check(char *s,char c){
 int i,contadorCheck=0;
 for(i=0;s[i];i++){
  if(s[i]==c){
   contadorCheck++;
   }
 	}
 	return contadorCheck; 
 }

/*int position(char *s, char c){

 int q;
 int pos = 0;

 for(q=0;s[q];q++){
  if(s[q]==c){
   pos = q + 1;
   }
 	}
  return pos;
}*/




int main(){
 char s[50],c;
 int count=0;
 int pos = 0;
 int q;

 /* ** Inicio ** */

 /* User string input */
 printf("Introduce un String:");
 gets(s);

 /* User char input */
 printf("Introduce el Character que deseas buscar:");
 c=getchar();

 /* Counting */
 count=check(s,c);
 /* Printing repeat count*/
 printf("\n\n");

 printf("El Character '%c' ocurrió %d Veces.\n\n",c,count);

 /* Positions */
 for(q=0;s[q];q++){
  if(s[q]==c){
   pos = q + 1;
   printf("   El character '%c' ocurre en las posiciones %d.\n",c,pos);
   }
 }
	return 0;
}


