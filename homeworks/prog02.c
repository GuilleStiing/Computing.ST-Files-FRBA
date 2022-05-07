//Disenie un algoritmo para mostrar el mensaje aprobado si la nota final//
//de un estudiante es mayor o igual que 6 y el mensaje desaprobado  en caso
//contrario//
#include <stdio.h>
int main (void)
{
int nota;
printf ("ingrese la nota: \n");
scanf("%d", & nota);
if (nota>=6)
printf("el alumno esta aprobado\n");
else
printf("el alumno no esta aprobado\n");

return 0;
}
