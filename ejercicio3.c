#include <stdio.h>

  int main()
{
   int segundos;
   int horas;
   int dias;
   int min;

   printf("Ingresa la cantidad de segundos;");
   scanf("%d",&segundos);

   dias = segundos/86400;
   segundos = segundos%86400;

   horas = segundos/3600;
   segundos = segundos%3600;

   min = segundos/60;
   segundos = segundos%60;

   printf ("El numero de dias es de %d\n", dias);
   printf ("El numero de horas es de:%d\n", horas);
   printf ("El numero de minutos es de:%d\n", min);
   printf ("El numero de segundos es de:%d\n", segundos);


}
