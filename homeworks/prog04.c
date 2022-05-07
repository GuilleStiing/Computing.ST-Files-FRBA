/* Desarrollar programa que permita calcular el promedio de 3 notas
*Luego debe obtener la situacion final que refleja el promedio, ya sea
*aprobado o reprobado.Considere validar que las notas esten entre 1 y 7
*Al terminar imprima la situacion junto con el promedio */
#include <stdio.h>
int main (void)
{
int nota1 ,nota2 ,nota3 ;
float promedio;
printf ("ingrese primera nota: \n");
scanf ("%d",& nota1);
printf("ingrese segunda nota: \n");
scanf("%d",& nota2);
printf("ingrese tercera nota:  \n");
scanf("%d",& nota3);
if(nota1>=1&&nota1<=7)
if(nota2>=1&&nota2<=7)
if(nota3>=1&&nota3<=7)
{
promedio=(nota1+nota2+nota3)/3;
if(promedio>=6) 
printf("aprobado");
else
printf("desaprobado");
}
return 0;
}
