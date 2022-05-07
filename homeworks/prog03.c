/* desarrollar programa que permita calcular el area de un triangulo
*recuerde que la formula a utilizar es: area=(base*altura/2)
*ademas valide que la base y la altura sean mayores a cero
*al terminar imprima el resultado obtenido */
#include <stdio.h>

int main (void)
{
int base,altura;
float formula;
printf("ingresar base: \n");
scanf("%d",&base);

printf("ingresar altura: \n");
scanf("%d",&altura);
formula=(base*altura)/2;
if(base>0 && altura>0)
{ printf("resultado:%2.f\n",formula); 
} else
printf ("la base y/o la altura son menor a cero");
return 0;
}
