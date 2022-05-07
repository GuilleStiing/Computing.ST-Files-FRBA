/* Desarrollar programa que permita pedir por pantalla una cantidad de
*metros cuadrados y luego el costo del metro cuadrado.
*
*la cantidad de metros debe estar entre 1 y 100, mienras que
*el costo  del metro cuadrado debe estar entre $100 y $5000
*imprima el total aplicando un 5% de descuento sobre el neto(cantidad*costo)
*/
#include <stdio.h>
int main (void)
{
int metro,costo;
float total,var;
printf("ingrese la cantidad: \n");
scanf("%d",&metro);
printf("ingrese numero: \n");
scanf("%d.f",&costo);

if(metro>1&&metro<100&&costo>100&&costo<5000)
{
total=metro*costo;
var=0.05*total;
total=total-var;
printf("resultado: %2.f \n",total);
}
else
{
printf("no es el resultado: \n"); 
}
return 0; 
}
