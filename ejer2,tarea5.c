#include <stdio.h>

int main ()
{
    float kilogramos;
    float precio;
    float precio_total;

    printf("Introduce el numero de kilogramos");
    scanf("%f",&kilogramos);

    printf("Introduce el precio por kilo de manzanas");
    scanf("%f",&precio);

    precio_total=precio*kilogramos;

    if(kilogramos>=0 & kilogramos<=2)
    {

        printf("El precio total de la compra es de:%f",precio_total);
    }
    else
        if(kilogramos>=2.01 & kilogramos<=5)
    {

        precio_total=precio_total*.90;
        printf("El precio total de la compra es de:%f",precio_total);

    }

    else
       if(kilogramos>=5.01 & kilogramos<=10)
    {
       precio_total=precio_total*.85;
       printf("El precio total de la compra es de:%f",precio_total);
    }

    else{
       precio_total=precio_total*.80;
       printf("El precio total de la compra es de:%f",precio_total);}




    return 0;

}
