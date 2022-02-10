#include <stdio.h>

  int main ()
{
int segundos;
int min;
int horas;
int dias;
int dias_segundos;
int horas_segundos;
int min_segundos;

printf("Ingresa los dias");
scanf( "%d",&dias);

printf("Ingresa las horas");
scanf( "%d",&horas);

printf("Ingresa los minutos");
scanf( "%d",&min);

dias_segundos = dias*86400;
horas_segundos = horas*3600;
min_segundos = min*60;

segundos = dias_segundos + horas_segundos + min_segundos;
printf( " El numero de segundos es de:%d",segundos);


   return 0;

}
