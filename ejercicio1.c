#include <stdio.h>

  int main()
{
float precio;
float descuento;
float total;

printf("Dame el precio del producto");
scanf("%f",&precio);

printf("Dame el descuento del producto");
scanf("%f",&descuento);

total = precio - (precio*(descuento/100));
printf("%.2f", total);

return 0;


}
