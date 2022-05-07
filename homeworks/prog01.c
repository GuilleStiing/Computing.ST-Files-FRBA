/* Desarrollar un programa que permita calcular el valor de la funcion f(x)
*para el valor de x ingresado y muestre su resultado por pantalla 
*f(x)=3x+2 */
#include <stdio.h>
int main (void)
{ 
int x,y;

printf ("Ingrese un numero: \n");
scanf("%d",&x);
y=3*x+2;
printf ("numero ingresado:%d\n",y);
return (0);
}
